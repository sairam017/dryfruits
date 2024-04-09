#pragma once



namespace dryfruits {

    using namespace System;

    // Define your managed cart data structure
    public ref struct CartItem {
        String^ itemName;
        int quantity;
        int price;
    };
}
