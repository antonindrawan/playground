pipeline {
  agent any

  stages {
    stage("Building") {
      sh(script: "g++ -std=c++11 -o test main.cpp")
    }
  }
}
