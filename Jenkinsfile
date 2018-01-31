pipeline {
  agent any

  stages {
    stage("Building") {
      steps {
        sh(script: "g++ -std=c++11 -o test main.cpp")
      }
    }
  }
}
