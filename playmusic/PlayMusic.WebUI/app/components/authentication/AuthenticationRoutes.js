'use strict';

angular.module('app.authentication', [
    'ui.router'
]);

angular.module('app.authentication')
    .config(configRoute);

configRoute.$inject = ['$stateProvider'];


function configRoute($stateProvider) {

    $stateProvider.state('authentication', {
        url: '/login',
        templateUrl: '/app/components/authentication/AuthenticationView.html',
    });
}
