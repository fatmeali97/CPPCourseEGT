#pragma once
class Balance
{
public:
	Balance(double balance);

	void SetBalance(double balance);
	double GetBalance() const;
	void SetAmount(double amount);
	double GetAmount() const;
	double Win(); // показваме как се изменя баланса при печалба;
	double Loose(); // показваме как се изменя баланса при загуба;

	void Play();
private:
	double m_balance; // в началото си добавя с колко е започнал
	double m_amount; // Колко иска да заложи
};