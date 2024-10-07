#include "item.h"
#include <iostream>
#include <vector>
#include <string>

void add_item(std::vector<Item>&item_list, double price, const std::string&sku,const std::string&category,const std::string&name){
		Item newItem;
		newItem.price = price;
		newItem.sku = sku;
		newItem.category = category;
		newItem.name = name;
		item_list.push_back(newItem);
}


double average_price(const std::vector<Item>& item_list){
	double total = 0;
	for(const auto & item : item_list){
		total += item.price;
	}
	return total/item_list.size();
}

void print_items(const std::vector<Item> & item_list){
	for(const auto & item:item_list){
		std::cout<<"##################\n";
		std::cout<<"Item name = "<<item.name<<"\n";
		std::cout<<"Item sku = "<<item.sku<<"\n";
		std::cout<<"Item category = "<<item.category<<"\n";
		std::cout<<"Item price = "<<item.price<<"\n";
		std::cout<<"##################\n";
	}
}

int main(){

	std::vector<Item>item_list;
	
	add_item(item_list,"1.99","123","fruit","apple");
	add_item(item_list,"2.49","123","bakery","bread");
	add_item(item_list,"3.49","123","dairy","milk");
	add_item(item_list,"3.99","123","grocery","cereal");
	add_item(item_list,"1.49","123","vegatable","carrot");
	
	print_items(item_list);
	
	std::cout<<"Average price of items = "<<average_price(item_list)<<"\n";
	
	return 0;
	
}
