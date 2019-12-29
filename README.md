# regression-car-mpg

---

## Overview

This is a personal project I started with the goal of improving experience in these three areas:

1. C++
2. Visual Studio
3. Regression/Machine Learning

By coding regression models in C++ with Visual Studio, I hope to depen my understanding. Regression and statistics should be computed with languages like R or Python, however I wanted to understand and research models instead of simply learning how to use them.

There are plenty of regression models I want to practice coding. The current list of models I want to implement are:

- Linear Regression
- Multivariable Regression
- Logistical Regression
- Polynomial Regression
- Stepwise Regression
- Ridge Regression
- Lasso Regression
- ElasticNet Regression
- Nearest Neighbor Regression

And possibly some sort of regression using a neural network. This list is subject to change considering I still need to research these types and see what is feasible given the data.

I am using the [Auto MPG Data Set](https://archive.ics.uci.edu/ml/datasets/auto+mpg) to predict MPG of cars.

## TODO

**Current Objective:** Implement a system to read/write models from/to files.

My aim is to set up the project in the best way possible so I do as little back tracking as possible. to achieve this, I need to implement a regression model abstract class that all regression models must inherit to standardize all the models.

The abstract class should be capable of

- [x] Reading dataset and generating a model
- [x] Saving the model to a file
- [x] Loading the model from a file
- [x] Making a predictions given data
- [x] Testing the fitness of the model

Although the abstract class is "complete" I would need to finish two model implementations before deciding if the current structure must change.

The implemenations of the actual regression models might be similar, in which I still need to decide if everything should be inherited from the abstract class or if some models should inherit eachother.

I also need to finish this README lole :p

---

## Regression Models

### Linear Regression

:/
