cmake_minimum_required(VERSION 3.15)
project(Progetto_Laboratorio)

set(CMAKE_CXX_STANDARD 11)

add_executable(Progetto_Laboratorio Sources/main.cpp Sources/Client.cpp Headers/Client.h Sources/BankAccount.cpp Headers/BankAccount.h
            Sources/Transaction.cpp Headers/Transaction.h Sources/Transaction.cpp Headers/Transaction.h Sources/getDate.cpp Headers/getDate.h
            Headers/FileManagement.h Sources/FileManagement.cpp Headers/randomString.h Sources/randomString.cpp Headers/Payment.h Sources/Payment.cpp Headers/Accreditation.h Sources/Accreditation.cpp Headers/clientType.h)