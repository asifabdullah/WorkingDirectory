(function()
	{
		var gem={name:'gem1',price:5,description:'This is a gem'};
		var app=angular.module('store',[]);
		app.controller('StoreController',function()
			{
				this.product=gem;
			});
		
		
	}
)();