'use strict';

angular.module('app.home', [
    'ui.router',
    'ngMaterial',
    'com.2fdevs.videogular',
    'com.2fdevs.videogular.plugins.controls'
]);

angular.module('app.home')
    .config(configHomeRoute);

configHomeRoute.$inject = ['$stateProvider'];

function configHomeRoute($stateProvider) {

    $stateProvider.state('home', {
        url: '/home',
        templateUrl: '/app/components/home/HomeView.html'
    });

    /*$routeProvider.when('/home', {
        templateUrl: '/app/components/home/HomeView.html',
        controller: homeController,
        controllerAs: 'vm'
    });*/
}
