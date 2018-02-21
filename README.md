<!-- rmarkdown v1 -->
---
title: "Untitled"
output: github_document
  pandoc_args: --webtex
---

<head>
 <script type="text/javascript" src="http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=default"></script>
</head>

# `sport` R package for bayesian dynamic rating system.
[![Travis-CI Build Status](https://travis-ci.org/gogonzo/runner.svg?branch=master)](https://travis-ci.org/gogonzo/runner)
[![Project Status](http://www.repostatus.org/badges/latest/active.svg)](http://www.repostatus.org/#active)
[![MIT License](https://badges.frapsoft.com/os/mit/mit.svg)](https://opensource.org/licenses/mit-license.php)
# About
Package contains functions calculating rating for two-player or multi-player matchups. 

# Elo rating system
`elo` function uses following formula.
$E_a = \frac{ 10^{ \frac{r_a}{400} } }{ 10^{ \frac{r_a}{400} } + 10^{ \frac{r_b}{400} } }$

# Glicko rating system
`glicko`
# Glicko2 rating system
`glicko2`
# Dynamic Bradley Terry
`bbt` 
Algorithm based on 'A Bayesian Approximation Method for Online Ranking' by Ruby C. Weng and Chih-Jen Lin

# Dynamic Logistic Regression
`dlr`
