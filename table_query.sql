CREATE TABLE Sales (
    Purchase_id INT PRIMARY KEY,
    Customer_name VARCHAR(100),
    ItemList VARCHAR(MAX),
    Date_and_Time DATETIME,
    Price_paid DECIMAL(10, 2)
);
