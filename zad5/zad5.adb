-- zad5.adb Bartłomiej Bajon

with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Zad5 is
    N : Integer;
begin
    Get (N);
    for I in 0 .. N-1 loop
        for J in 1 .. N-I loop
            Put (" ");
        end loop;
        
        for J in 1 .. I*2+1 loop
            Put ("*");
        end loop;
        New_Line;
    end loop;
end Zad5;