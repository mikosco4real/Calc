pipeline{
    agent any
    stages{
        stage('Build'){
            steps{
                sh 'apt update && apt upgrade -y'
                sh 'apt install gcc -y'
                sh 'apt install g++ -y'
                sh 'apt install cmake -y'
                sh 'apt install -y googletest googletest-tools libgtest-dev'
                sh 'mkdir -p build'
                sh 'cd build && cmake ../'
                sh 'make'
            }
        }
        stage('Test'){
            steps{
                sh 'cd build && ctest '
            }
        }
        stage('Deploy'){
            steps{
                echo 'Deploying my app on AWS'
            }
        }
    }
}