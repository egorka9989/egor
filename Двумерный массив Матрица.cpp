program Matrix41;
var
a : array[1..10, 1..10] of integer;
NumMax, Num, ColumnMax, M, N, i, j:Integer;
Column: set of byte;

begin
Write('N: ');
Readln(N);
Write('M: ');
Readln(M);

for  i: = 1 to M do
begin
writeln(i, ': ');
for j: = 1 to N do
begin
Write(j, ' : ');
Read(a[i, j]);
end;
end;

for  j: = 1 to N do
begin
Column : = [];
Num: = 0;
for i: = 1 to M do
if (a[i, j] in Column) then inc(Num)
else Column : = Column + [a[i, j]];

if (Num > NumMax) or (j = 1) then
begin
NumMax : = Num;
ColumnMax: = j;
end;

end;

Writeln(ColumnMax);
end.