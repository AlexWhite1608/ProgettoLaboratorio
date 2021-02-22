#include <iostream>
#include "../Headers/getDate.h"
#include "../Headers/randomString.h"
#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"
#include "../Headers/Transaction.h"
#include "../Headers/FileManagement.h"
#include "../Headers/Accreditation.h"
#include "../Headers/Payment.h"
#include <typeinfo>

int main() {

    //TODO initialize the FileManagement to write the bank account attributes

    BankAccount* bankAccount1 = new BankAccount();
    Client* client1 = new Client("Alessandro Bianco", ClientType::Private, bankAccount1);

    Transaction* initialTransaction = new Accreditation(randomString(ID_LENGTH), "Transazione iniziale", "Alessandro Bianco", "Banca", INITIAL_TRANSACTION_SUM_PRIVATE, getDate());
    client1->createBankAccount(initialTransaction);

    Transaction* newTransaction = new Accreditation(randomString(ID_LENGTH), "Stipendio", "Lavoro", "Alessandro Bianco", 1765.78, getDate());
    client1->doTransaction(newTransaction);

    Transaction* newTransaction2 = new Payment(randomString(ID_LENGTH), "Tasse", "Alessandro Bianco", "Stato", 851.21, getDate());
    client1->doTransaction(newTransaction2);

    /*
    client1->doAccountStatement();*/

}