a = input('number1=');
b = input('number2=');
if a==b
fprintf('a is equal to b \n');
elseif a>0 && b>0
fprintf('both positive \n');
elseif a<0 && b<0
fprintf('both negative \n');
else
fprintf('other case \n');
end