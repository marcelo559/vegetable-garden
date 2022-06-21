# Version 02

After I developing code that measure temperature and humidity, I record informacion at database in a defined period.

Now, I will use five soil moisture sensor, in a defined period I will check soil moisture each one plant vases and record on a database for futures analysis. But I discovery now, that I can't use five sensor with NodeMCU because it haven't 5 analog doors, there is only one and five digital doors. The digital doors don't permited receive the level (numeric) of humidity only bolean return (0 or 1). 

I have two ways, first I can try to modified the project and in this moment equal the water with LOW or HIGH of digital OUTPUT answer, or I try to use Arduino with ESP82, to conect the sensors in a Arduino Uno and use ESP82 to connect and send informations to endpoint for insert data on the database.
