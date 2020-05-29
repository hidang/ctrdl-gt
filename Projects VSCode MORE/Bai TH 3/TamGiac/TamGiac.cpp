TamGiac &TamGiac::operator=(const TamGiac &tamgiac)
{
    this->A = tamgiac.A;
    this->B = tamgiac.B;
    this->C = tamgiac.C;
    return *this;
}
void TamGiac::Nhap()
{
    A.Nhap();
    B.Nhap();
    C.Nhap();
}

void TamGiac::Xuat()
{
    A.Xuat();
    B.Xuat();
    C.Xuat();
}

void TamGiac::TinhTien()
{
    cout << "Tinh tien theo vec to: ";
    double a, b;
    cin >> a >> b;
    cout << "Da giac sau khi tinh tien: " << endl;
    A.TinhTien(a, b);
    B.TinhTien(a, b);
    C.TinhTien(a, b);
}

void TamGiac::Quay()
{
    cout << "Goc quay:  ";
    double rad;
    cin >> rad;
    cout << "Da giac sau khi quay: " << endl;
    A.Quay(rad);
    B.Quay(rad);
    C.Quay(rad);
}

void TamGiac::ThuPhong()
{
    cout << "He so thu phong:  ";
    double k;
    cin >> k;
    if (k > 0)
        cout << "Tam giac sau khi Phong To: " << endl;
    else
    {
        cout << "Tam giac sau khi Thu Nho: " << endl;
        k = -k;
    }

    A.ThuPhong(k);
    B.ThuPhong(k);
    C.ThuPhong(k);
}