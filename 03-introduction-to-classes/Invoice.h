// Chapter 3 - Introduction to Classes, Objects, Member Functions and Strings
// Invoice Class
#include <string>


class Invoice {
    public:
        Invoice(std::string invoicePartNumber, std::string invoicePartDescription, int invoiceQuantity, int invoicePrice)
            : partNumber{invoicePartNumber}, partDescription{invoicePartDescription} {
            
            if (invoiceQuantity > 0) {
                quantity = invoiceQuantity;
            }

            if (invoicePrice > 0) {
                price = invoicePrice;
            }
        }

        int getInvoiceAmount() const {
            return quantity * price;
        }

        std::string getPartNumber() const {
            return partNumber;
        }

        void setNumber(std::string invoicePartNumber) {
            partNumber = invoicePartNumber;
        }

        std::string getPartDescription() const {
            return partDescription;
        }

        void setPartDescription(std::string invoicePartDescription) {
            partDescription = invoicePartDescription;
        }

        int getQuantity() const {
            return quantity;
        }

        void setQuantity(int invoiceQuantity) {
            quantity = invoiceQuantity;
        }

        int getPrice() const {
            return price;
        }

        void setPrice(int invoicePrice) {
            price = invoicePrice;
        }
    private:
        std::string partNumber;
        std::string partDescription;
        int quantity{0};
        int price{0};
};
