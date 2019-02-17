close all;
clc;
clear
%%------------------------------------------------------------------------
%%
BaudRate = 9600; % this should be the same BaudRate at arduino side
timeout = 2;
RECIEVING = true; % constant to control while loop
Temperature = zeros(1,100); %vector to hold temperture values
%%-------------------------------------------------------------------------

%{
1- intialize serial port 

while RECIEVING
    2- check if there is available data @ serial Buffer using mySerial.BytesAvailable 
	3- if that is true do the following:
		read that data from the serial port using fscanf(mySerial ) 
		convert that data from string to double using str2double(serialData) 
		remove the first element in Temperature vector 
		add the newtemperature at position 100 in Temperature vector
		plot Temperature matrix 
		don't forget to show the polt using  drawnow command
end
4- after finishing close and delete sreial object created at intialization 
}%



