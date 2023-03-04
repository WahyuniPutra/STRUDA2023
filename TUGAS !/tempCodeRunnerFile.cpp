void tambah()
{
  if (jumlahData == jumlah_Data)
  {
    cout << "Data KTP Sudah Penuh!" << endl;
    return;
  }
  while (true)
  {
    cout << "No ID : ";
    cin >> p->ktp.noID;
    if (checkID(p->ktp.noID))
    {
      cout << "ID Sudah Digunakan!" << endl;
    }
    else
    {
      break;
    }
  }