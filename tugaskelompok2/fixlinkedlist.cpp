#include <iostream>
using namespace std;

// Structure of Node.
struct Node
{
    int data;

    Node *link;
};

Node *front = NULL;
Node *rear = NULL;

// Function to check if queue is empty or not
bool isEmpty()
{
    if (front == NULL && rear == NULL)
        return true;
    else
        return false;
}

// function to enter elements in queue
void enqueue(int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    ptr->link = NULL;

    // If inserting the first element/node
    if (front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

// function to delete/remove element from queue
void dequeue()
{
    if (isEmpty())
        cout << "Antrian Kosong!" << endl;
    else if (front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else
    {
        Node *ptr = front;
        front = front->link;
        free(ptr);
    }
    cout << "Berhasil Melakukan Dequeue!" << endl;
}

// function to show the element at front
void showFront()
{
    if (isEmpty())
    {
        cout << "Antrian Kosong!" << endl;
    }
    else
    {   
        system("cls");
        cout << "=========================" << endl;
        cout << "-- Front Antrian Queue --" << endl;
        cout << "=========================" << endl;
        cout << "Front Antrian :" << front -> data;
        cout << " " << endl;
    }
}

// function to display queue
void displayQueue()
{
    if (isEmpty())
        cout << "Antrian Kosong!" << endl;
    else
    {
        Node *ptr = front;
        while (ptr != NULL)
        {
            cout << ptr -> data << ",";
            ptr = ptr -> link;
        }
    }
}

void searchQueue(int value)
{
    if (isEmpty())
        cout << "Antrian Kosong!" << endl;
    else
    {
        Node *ptr = front;
        while (ptr != NULL)
        {
            if (ptr->data == value)
            {
                cout << "Data " << value << " ditemukan di antrian!" << endl;
                return;
            }
            ptr = ptr->link;
        }
        cout << "Data " << value << " tidak ditemukan di antrian!" << endl;
    }
}

void editQueue(int index, int value)
{
    if (isEmpty())
    {
        cout << "Antrian Kosong!" << endl;
    }
    else
    {
        Node *ptr = front;
        int i = 0;
        while (ptr != NULL)
        {
            if (i == index)
            {
                ptr->data = value;
                cout << "Data pada index " << index << " berhasil diubah menjadi " << value << endl;
                return;
            }
            i++;
            ptr = ptr->link;
        }
        cout << "Index " << index << " tidak ditemukan di antrian!" << endl;
    }
}

// Function to calculate total, average, maximum, and minimum of queue
void calculateQueue()
{
    if (isEmpty())
    {
        cout << "Antrian Kosong!" << endl;
    }
    else
    {
        Node *ptr = front;
        int total = 0;
        int count = 0;
        int max = ptr->data;
        int min = ptr->data;
        while (ptr != NULL)
        {
            total += ptr->data;
            count++;
            if (ptr->data > max)
            {
                max = ptr->data;
            }
            if (ptr->data < min)
            {
                min = ptr->data;
            }
            ptr = ptr->link;
        }
        system("cls");
        cout << "=====================" << endl;
        cout << "-- Kalkulasi Queue --" << endl;
        cout << "=====================" << endl;
        cout << "Total: " << total << endl;
        cout << "Rata-rata: " << (double)total/count << endl;
        cout << "Terbesar: " << max << endl;
        cout << "Terkecil: " << min << endl;
    }
}

void exit()
{
    cout << "Terimakasih!" << endl;
}

// Main Function
int main()
{
    int pilih, menu, value;
MainMenu:
    system("cls");
    cout << "===========================" << endl;
    cout << "---- LINKED LIST QUEUE ----" << endl;
    cout << "===========================" << endl;
    cout << "\n1.enqueue\n2.dequeue\n3.showfront\n4.displayQueue\n5.PeekQueue\n6.EditQueue\n7.CalculateQueue\n8.exit\n";
    cout << "PILIH NGAB : ";
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        cout << "Masukan Data : ";
        cin >> value;
        enqueue(value);
        aa:
        cout << "\n1.Menu Utama\n2.Keluar" << endl;
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto aa;
        }
        break;
    case 2:
        dequeue();
        cout << "1.Menu Utama\n2.Keluar" << endl;
    bb:
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto bb;
        }
        break;
    case 3:
        showFront();
        cout << "1.Menu Utama\n2.Keluar" << endl;
    cc:
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto cc;
        }
        break;
    case 4:
        displayQueue();
        cout << "\n1.Menu Utama\n2.Keluar" << endl;
    dd:
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto dd;
        }
        break;
    case 5 :
    int searchValue;
        cout << "Masukkan nilai yang ingin dicari: ";
        cin >> searchValue;
        searchQueue(searchValue);
        cout << "1.Menu Utama\n2.Keluar" << endl;
    ee:
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto ee;
        }
        break;
    case 6:
    int index, value;
    cout << "Masukkan Index yang ingin diubah: ";
    cin >> index;
    cout << "Masukkan Nilai baru: ";
    cin >> value;
    editQueue(index, value);
    cout << "1.Menu Utama\n2.Keluar" << endl;
ff:
    cout << "Pilih : ";
    cin >> menu;
    if (menu == 1)
    {
        goto MainMenu;
    }
    else if (menu == 2)
    {
        exit();
    }
    else
    {
        goto ff;
    }
    break;
case 7:
    calculateQueue();
    cout << "1.Menu Utama\n2.Keluar" << endl;
    hh:
    cout << "Pilih : ";
    cin >> menu;
    if (menu == 1)
    {
        goto MainMenu;
    }
    else if (menu == 2)
    {
        exit();
    }
    else
    {
        goto hh;
    }
    break;
    case 8 :
        cout << "Anda Ingin Keluar?" << endl;
        cout << "1.Menu Utama\n2.Keluar" << endl;
    ii:
        cout << "Pilih : ";
        cin >> menu;
        if (menu == 1)
        {
            goto MainMenu;
        }
        else if (menu == 2)
        {
            exit();
        }
        else
        {
            goto ii;
        }
        break;
    }
}