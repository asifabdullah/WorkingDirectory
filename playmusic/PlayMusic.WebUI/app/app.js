'use strict';

// declair angular 
angular.module('app', [
    'ngRoute',
    'ui.router',
    'app.home',
    'app.authentication'
]);

angular.module('app')
    .config(configAppRoute);

configAppRoute.$inject = ['$stateProvider', '$urlRouterProvider'];

function configAppRoute($stateProvider, $urlRouterProvider) {

    $urlRouterProvider.otherwise('/home');
};
