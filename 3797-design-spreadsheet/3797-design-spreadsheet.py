class Spreadsheet:
    def __init__(self, rows: int):
        self.a = [[0] * 26 for _ in range(rows)] 

    def setCell(self, cell: str, value: int) -> None:
        col = ord(cell[0]) - ord('A')   
        row = int(cell[1:]) - 1         
        self.a[row][col] = value

    def resetCell(self, cell: str) -> None:
        col = ord(cell[0]) - ord('A')
        row = int(cell[1:]) - 1
        self.a[row][col] = 0

    def getValue(self, formula: str) -> int:
        ops = formula.split('=')[1].split('+')
        res = 0
        for op in ops:
            op = op.strip()
            if not op:
                continue
            if op[0].isalpha(): 
                col = ord(op[0]) - ord('A')
                row = int(op[1:]) - 1
                res += self.a[row][col]
            elif op.isdigit():   
                res += int(op)
                
        return res
