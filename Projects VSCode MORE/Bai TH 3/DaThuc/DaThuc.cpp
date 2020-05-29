
istream &operator>>(istream &is, DaThuc &x)
{
    cout << "Nhap bac da thuc: ";
    is >> x.n;
    cout << "Nhap he so da thuc: " << endl;
    for (int i = x.n; i >= 0; i--)
    {
        cin >> x.heso[i];
    }
    return is;
}
ostream &operator<<(ostream &os, DaThuc x)
{
    for (int i = x.n; i >= 0; i--)
    {
        if (x.heso[i] >= 0)
        {
            os << "+ " << x.heso[i] << "*"
               << "x^" << i << " ";
        }
        else
            cout << x.heso[i] << "*"
                 << "x^" << i << " ";
    }
    os << endl;
    return os;
}
int DaThuc::laybac()
{
    return n;
}

DaThuc DaThuc::operator+(const DaThuc &A)
{
    DaThuc B;
    if (n >= A.n)
    {
        B.n = n;
        for (int i = 0; i < n + 1; i++)
        {
            if (i - A.n > 0)
                B.heso[i] = heso[i];
            else
                B.heso[i] = heso[i] + A.heso[i];
        }
    }
    else
    {
        B.n = A.n;
        for (int i = 0; i < A.n + 1; i++)
        {
            if (i - n > 0)
                B.heso[i] = A.heso[i];
            else
                B.heso[i] = A.heso[i] + heso[i];
        }
    }
    return B;
}
DaThuc DaThuc::operator-(const DaThuc &A)
{
    DaThuc B;
    if (n >= A.n)
    {
        B.n = n;
        for (int i = 0; i < n + 1; i++)
        {
            if (i - A.n > 0)
                B.heso[i] = heso[i];
            else
                B.heso[i] = heso[i] - A.heso[i];
        }
    }
    else
    {
        B.n = A.n;
        for (int i = 0; i < A.n + 1; i++)
        {
            if (i - n > 0)
                B.heso[i] = A.heso[i];
            else
                B.heso[i] = A.heso[i] - heso[i];
        }
    }
    return B;
}

DaThuc DaThuc::operator*(float k)
{
    DaThuc x;
    x.n = n;
    for (int i = 0; i < n + 1; i++)
    {
        x.heso[i] = heso[i] * k;
    }
    return x;
}
bool DaThuc::operator==(const DaThuc &x)
{
    if (n == x.n)
    {
        for (int i = 0; i < n + 1; i++)
        {
            if (x.heso[i] != heso[i])
                return false;
            break;
        }
        return true;
    }
}
DaThuc DaThuc::operator*(const DaThuc &a)
{
    float tam = 0;
    DaThuc B;
    B.n = n + a.n;
    for (int i = 0; i <= B.n; i++)
    {
        for (int j = 0; j <= i && j <= n; j++)
        {
            tam = tam + heso[j] * a.heso[i - j];
        }
        B.heso[i] = tam;
    }
    return B;
}