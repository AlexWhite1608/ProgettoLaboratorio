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
    FileManagement* fileManagement = new FileManagement("C:\\Dev\\C++\\Progetto_Laboratorio\\OutputFiles\\AccountStatement.txt");

    BankAccount* bankAccount1 = new BankAccount();
    Client* client1 = new Client("Alessandro Bianco", ClientType::Private, bankAccount1);

    Transaction* initialTransaction = new Accreditation(randomString(ID_LENGTH), "Transazione iniziale", "Alessandro Bianco", "Banca", INITIAL_TRANSACTION_SUM_PRIVATE, getDate());
    client1->createBankAccount(initialTransaction);

    Transaction* newTransaction = new Accreditation(randomString(ID_LENGTH), "Stipendio", "Lavoro", "Alessandro Bianco", 1765.78, getDate());
    client1->doTransaction(newTransaction);

    /*
    client1->doAccountStatement();*/

}