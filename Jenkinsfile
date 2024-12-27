pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                script {
                    git branch: 'main', url: 'https://github.com/dinhtoan2110/demo_jenkins.git'
                }
            }
        }
    }
}
