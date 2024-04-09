
#pragma once

#include <map>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace dryfruits {

    using namespace System;
    using namespace System::Collections::Generic;

    // Define the DistanceMap type alias
    using ProductPriceMap = std::map<std::string, int>;

    public ref class Calculation
    {
    public:
        // Function to initialize and return the DistanceMap
        static ProductPriceMap InitializeProductPriceMap()
        {
            // Create a new DistanceMap
            ProductPriceMap priceMap;

            // Insert elements into the map

            priceMap["Pista"] = 150;
            priceMap["Cashew nuts"] = 100;
            priceMap["Angeer(Fings)"] = 200;
            priceMap["Dates"] = 80;
            priceMap["Walnuts"] = 250;
            priceMap["Almod"] = 120;
            priceMap["Peanut"] = 60;
            priceMap["Rasins(Kismis)"] = 160;

           
            // Add other stations and their distances here...

            return priceMap;
        }


        // Function to calculate the total price of a selected item
        static int CalculateItemTotal(System::String^ itemName, int quantity)
        {
            // Initialize the price map
            ProductPriceMap priceMap = InitializeProductPriceMap();

            // Convert System::String^ to std::string
            msclr::interop::marshal_context context;
            std::string itemNameStr = context.marshal_as<std::string>(itemName);

            // Retrieve the price from the map
            int itemPrice = priceMap[itemNameStr];

            // Calculate the total price
            int itemTotal = itemPrice * quantity;

            return itemTotal;
        }

        

    

      



       
    };
}