pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                script {
                    git 'https://github.com/dinhtoan2110/demo_jenkins.git'
                }
            }
        }

        stage('Build') {
            steps {
                script {
                    echo 'Building application...'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    echo 'Running tests...'
                }
            }
        }

        stage('Docker Build & Push') {
            steps {
                script {
                    echo 'Building Docker image...'
                }
            }
        }

        stage('Deploy') {
            steps {
                script {
                    echo 'Deploying to server...'
                }
            }
        }
    }

    post {
        success {
            echo 'Pipeline completed successfully!'
        }
        failure {
            echo 'Pipeline failed!'
        }
    }
}
