#include <iostream>
#include "../Headers/getDate.h"
#include "../Headers/randomString.h"
#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"
#include "../Headers/Transaction.h"
#include "../Headers/FileManagement.h"
#include "../Headers/Accreditation.h"
#include "../Headers/Payment.h"

int main() {

    //TODO initialize the FileManagement to write the bank account attributes
    BankAccount* bankAccount = new BankAccount(randomString(ID_LENGTH), randomString(IBAN_LENGTH), 0);

    Client* client1 = new Client("Alessandro Bianco", ClientType::Private, bankAccount);

    Transaction* initialTransaction = new Accreditation(randomString(ID_LENGTH), "Transazione iniziale", "Banca", "Alessandro Bianco", INITIAL_TRANSACTION_SUM_PRIVATE, getDate());
    client1->createBankAccount(bankAccount, initialTransaction);

    Transaction* transaction2 = new Payment(randomString(ID_LENGTH), "Rata macchina", "Alessandro Bianco", "Concessionario", 450.89, getDate());
    client1->doTransaction(bankAccount, transaction2);

    std::cout << "Bilancio: " << bankAccount->getBalance();

    /*
    client1->doAccountStatement();*/

}