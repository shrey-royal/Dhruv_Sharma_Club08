/*
Pure Virtual Function will be used to make a class Abstract Class.

in order to do that we need to declare a function as pure virtual function.

Syntax:
virtual void fun() = 0;

Sure, let's consider a real-world example related to the concept of an abstract class.

Imagine you are building a computer game, and in this game, you have different types of vehicles: cars, motorcycles, and bicycles. Each of these vehicles shares some common characteristics, such as a brand, a model, and a maximum speed. However, each type of vehicle also has unique features and behaviors specific to it.
In this scenario, you can use an abstract class called "Vehicle" as a blueprint for all the different types of vehicles in your game.

Whichever class will have the pure virtual function, that class will become the abstract class. and whichever class will inherit the abstract class, that class will become the concrete class. and the concrete class must have to override the pure virtual function of the abstract class.

*/