'use strict';

angular.module('app.home')
    .controller('homeController', homeController);

homeController.$inject = ['$scope','$sce'];

function homeController($scope, $sce) {
    var vm = this;
    console.log('init');

    $scope.isOpen = false;

    $scope.demo = {
        isOpen: false,
        count: 0,
        selectedAlignment: 'md-left'
    };

    $scope.config = {
        sources: [
      {src: $sce.trustAsResourceUrl("http://static.videogular.com/assets/audios/videogular.mp3"), type: "audio/mpeg"},
      {src: $sce.trustAsResourceUrl("http://static.videogular.com/assets/audios/videogular.ogg"), type: "audio/ogg"}
        ],
        theme: {
            url: "http://www.videogular.com/styles/themes/default/latest/videogular.css"
        }
    };

    console.log($scope.isOpen);

   
};