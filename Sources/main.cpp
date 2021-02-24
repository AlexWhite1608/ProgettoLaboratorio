#include <iostream>
#include "../Headers/getDate.h"
#include "../Headers/randomString.h"
#include "../Headers/Client.h"
#include "../Headers/BankAccount.h"
#include "../Headers/Transaction.h"
#include "../Headers/Accreditation.h"
#include "../Headers/Payment.h"

int main() {

    //TODO capisci come usare l'iban del conto nelle transazioni!

    BankAccount* bankAccount = new BankAccount(randomString(ID_LENGTH), randomString(IBAN_LENGTH), 0);

    Client* client1 = new Client("Alessandro Bianco", ClientType::Private, bankAccount);

    Transaction* initialTransaction = new Accreditation(randomString(ID_LENGTH), "Transazione iniziale", "Banca", "Alessandro Bianco", INITIAL_TRANSACTION_SUM_PRIVATE, getDate());
    client1->createBankAccount(initialTransaction);

    Transaction* transaction2 = new Payment(randomString(ID_LENGTH), "Rata macchina", "Alessandro Bianco", "Concessionario", 450.89, getDate());
    client1->doTransaction(transaction2);

    std::cout << "Bilancio: " << bankAccount->getBalance() << std::endl;

    std::cout << "-------------------------------------------------------------------------------------------------------------" << std::endl;

    client1->doAccountStatement();

}