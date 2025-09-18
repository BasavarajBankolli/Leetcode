class TaskManager {

public:
    TaskManager(vector<vector<int>>& tasks) {
        for (auto& task : tasks) {
            int userId = task[0];
            int taskId = task[1];
            int priority = task[2];
            add(userId, taskId, priority);
        }
    }
    
    void add(int userId, int taskId, int priority) {
        taskDetails[taskId] = {userId, priority};
        sortedTasks.insert({priority, taskId});
    }
    
    void edit(int taskId, int newPriority) {
        auto [userId, oldPriority] = taskDetails[taskId];
        sortedTasks.erase({oldPriority, taskId});
        taskDetails[taskId] = {userId, newPriority};
        sortedTasks.insert({newPriority, taskId});
    }
    
    void rmv(int taskId) {
        auto [userId, priority] = taskDetails[taskId];
        sortedTasks.erase({priority, taskId});
        taskDetails.erase(taskId);
    }
    
    int execTop() {
        if (sortedTasks.empty()) return -1;
        auto it = prev(sortedTasks.end());
        int taskId = it->second;
        int userId = taskDetails[taskId].first;
        sortedTasks.erase(it);
        taskDetails.erase(taskId);
        return userId;
    }
private:
    unordered_map<int, pair<int, int>> taskDetails;
    set<pair<int, int>> sortedTasks;

};
