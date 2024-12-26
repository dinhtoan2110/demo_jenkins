pipeline {
    agent any

    environment {
        DOCKER_IMAGE = 'myapp:latest'
        DOCKER_REGISTRY = 'dockerhub_username'
        GIT_REPO = 'https://github.com/dinhtoan2110/demo_jenkins.git'
        BRANCH = 'main'
    }

    stages {
        stage('Checkout') {
            steps {
                script {
                    echo 'Cloning repository...'
                    checkout scm
                }
            }
        }

        stage('Build') {
            steps {
                script {
                    echo 'Building application...'
                    sh 'mvn clean package'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    echo 'Running tests...'
                    sh 'mvn test'
                }
            }
        }

        stage('Docker Build & Push') {
            steps {
                script {
                    echo 'Building Docker image...'
                    sh "docker build -t ${DOCKER_REGISTRY}/${DOCKER_IMAGE} ."
                    echo 'Pushing Docker image...'
                    sh "docker push ${DOCKER_REGISTRY}/${DOCKER_IMAGE}"
                }
            }
        }

        stage('Deploy') {
            steps {
                script {
                    echo 'Deploying to server...'
                    sh './deploy.sh'
                }
            }
        }
    }

    post {
        success {
            echo 'Pipeline completed successfully!'
            mail to: 'you@example.com', 
                 subject: 'Build Successful: ${currentBuild.fullDisplayName}', 
                 body: "Build completed successfully.\nJob: ${env.JOB_NAME} \nBuild: ${env.BUILD_NUMBER}"
        }
        failure {
            echo 'Pipeline failed!'
            mail to: 'you@example.com', 
                 subject: 'Build Failed: ${currentBuild.fullDisplayName}', 
                 body: "Build failed.\nJob: ${env.JOB_NAME} \nBuild: ${env.BUILD_NUMBER}"
        }
    }
}
