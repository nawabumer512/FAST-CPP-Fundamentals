
#include<iostream>
using namespace std;
int main()
{
		char ans, y = 'Y', n = 'N';


		cout << "Start General Diagnosis." << endl;
		cout << "1) Record System Information." << endl;
		cout << "Reboot server to see,\nif condition still exists." << endl;
		cout << "Is this a newly installed server? \nAns (Y/N):";
		cin >> ans;
		if ((ans != y) && (ans != n))
			cout << "Input error!" << endl;
		else {
			if (ans == y) {
				cout << "2) Reseat any components that may have come loose during shipping and reboot the server." << endl;
				cout << "Does condition still exists? \nAns (Y/N) :";
				cin >> ans;
				if ((ans != y) && (ans != n))
					cout << "Input error!" << endl;
				else {
					if (ans == y)
					{
						cout << "Were options added pr was the configuration changed recently? \nAns (Y/N) :";
						cin >> ans;
						if ((ans != y) && (ans != n))
							cout << "Input error!" << endl;
						else {
							if (ans == n)
							{
								cout << "3) Check for service notification." << endl;
								cout << "4) Download lastest software and firmware from HP website." << endl;
								cout << "Does condition still exists? \nAns (Y/N) :";
								cin >> ans;
								if ((ans != y) && (ans != n))
									cout << "Input error!" << endl;
								else {
									if (ans == n)
										cout << "1) Record action taken." << endl;
									if (ans == y) {
										cout << "5) Isolate and minimize the memory configuration." << endl;
										cout << "Does condition still exists? \nAns (Y/N) :";
										cin >> ans;
										if ((ans != y) && (ans != n))
											cout << "Input error!" << endl;
										else
										{
											if (ans == n)
												cout << "1) Record action taken." << endl;
											if (ans == y) {
												cout << "Break server down to minimal configuration." << endl;
												cout << "Does condition still exists? \nAns (Y/N) :";
												cin >> ans;
												if ((ans != y) && (ans != n))
													cout << "Input error!" << endl;
												else {
													if (ans == n) {
														cout << "6) Add one part at a time back to configuration to isolate faulty component." << endl;
														cout << "Does condition still exists? \nAns (Y/N) :";
														cin >> ans;
														if ((ans != y) && (ans != n))
															cout << "Input error!" << endl;
														else {
															if (ans == n)
																cout << "1) Record action taken." << endl;
															if (ans == y) {
																cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
																cout << "Call HP Service Provider." << endl;
															}
														}
													}
													if (ans == y) {
														cout << "7) Troubleshoot or replace basic server spare parts." << endl;
														cout << "Does condition still exists? \nAns (Y/N) :";
														cin >> ans;
														if ((ans != y) && (ans != n))
															cout << "Input error!" << endl;
														else {
															if (ans == y) {
																cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
																cout << "Call HP Service Provider." << endl;
															}
															if (ans == n)
																cout << "Record Symptom & error information on repair tag if sending back a failed part." << endl;
														}
													}
												}
											}
										}
									}
								}
							}
							if (ans == y)
							{
								cout << "6) Isolate what has changed. Verify it was installed correctly\nRestore server to last known working state or original shipped configuration." << endl;
								cout << "Does condition still exists? \nAns (Y/N) :";
								cin >> ans;
								if ((ans != y) && (ans != n))
									cout << "Input error!" << endl;
								else {
									if (ans == n)
										cout << "1) Record action taken." << endl;
									if (ans == y) {
										cout << "5) Isolate and minimize the memory configuration." << endl;
										cout << "Does condition still exists? \nAns (Y/N) :";
										cin >> ans;
										if ((ans != y) && (ans != n))
											cout << "Input error!" << endl;
										else
										{
											if (ans == n)
												cout << "1) Record action taken." << endl;
											if (ans == y) {
												cout << "Break server down to minimal configuration." << endl;
												cout << "Does condition still exists? \nAns (Y/N) :";
												cin >> ans;
												if ((ans != y) && (ans != n))
													cout << "Input error!" << endl;
												else {
													if (ans == n) {
														cout << "6) Add one part at a time back to configuration to isolate faulty component." << endl;
														cout << "Does condition still exists? \nAns (Y/N) :";
														cin >> ans;
														if ((ans != y) && (ans != n))
															cout << "Input error!" << endl;
														else {
															if (ans == n)
																cout << "1) Record action taken." << endl;
															if (ans == y) {
																cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
																cout << "Call HP Service Provider." << endl;
															}
														}
													}
													if (ans == y) {
														cout << "7) Troubleshoot or replace basic server spare parts." << endl;
														cout << "Does condition still exists? \nAns (Y/N) :";
														cin >> ans;
														if ((ans != y) && (ans != n))
															cout << "Input error!" << endl;
														else {
															if (ans == y) {
																cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
																cout << "Call HP Service Provider." << endl;
															}
															if (ans == n)
																cout << "Record Symptom & error information on repair tag if sending back a failed part." << endl;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (ans == n)
						cout << "1) Record action taken." << endl;
				}
			} 
			else { 
				if (ans == n) {
					cout << "Were options added pr was the configuration changed recently? \nAns (Y/N) :";
					cin >> ans;
					if ((ans != y) && (ans != n))
						cout << "Input error!" << endl;
					else {
						if (ans == n)
						{
							cout << "3) Check for service notification." << endl;
							cout << "4) Download lastest software and firmware from HP website." << endl;
							cout << "Does condition still exists? \nAns (Y/N) :";
							cin >> ans;
							if ((ans != y) && (ans != n))
								cout << "Input error!" << endl;
							else {
								if (ans == n)
									cout << "1) Record action taken." << endl;
								if (ans == y) {
									cout << "5) Isolate and minimize the memory configuration." << endl;
									cout << "Does condition still exists? \nAns (Y/N) :";
									cin >> ans;
									if ((ans != y) && (ans != n))
										cout << "Input error!" << endl;
									else
									{
										if (ans == n)
											cout << "1) Record action taken." << endl;
										if (ans == y) {
											cout << "Break server down to minimal configuration." << endl;
											cout << "Does condition still exists? \nAns (Y/N) :";
											cin >> ans;
											if ((ans != y) && (ans != n))
												cout << "Input error!" << endl;
											else {
												if (ans == n) {
													cout << "6) Add one part at a time back to configuration to isolate faulty component." << endl;
													cout << "Does condition still exists? \nAns (Y/N) :";
													cin >> ans;
													if ((ans != y) && (ans != n))
														cout << "Input error!" << endl;
													else {
														if (ans == n)
															cout << "1) Record action taken." << endl;
														if (ans == y) {
															cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
															cout << "Call HP Service Provider." << endl;
														}
													}
												}
												if (ans == y) {
													cout << "7) Troubleshoot or replace basic server spare parts." << endl;
													cout << "Does condition still exists? \nAns (Y/N) :";
													cin >> ans;
													if ((ans != y) && (ans != n))
														cout << "Input error!" << endl;
													else {
														if (ans == y) {
															cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
															cout << "Call HP Service Provider." << endl;
														}
														if (ans == n)
															cout << "Record Symptom & error information on repair tag if sending back a failed part." << endl;
													}
												}
											}
										}
									}
								}
							}
						}
						if (ans == y)
						{
							cout << "6) Isolate what has changed. Verify it was installed correctly\nRestore server to last known working state or original shipped configuration." << endl;
							cout << "Does condition still exists? \nAns (Y/N) :";
							cin >> ans;
							if ((ans != y) && (ans != n))
								cout << "Input error!" << endl;
							else {
								if (ans == n)
									cout << "1) Record action taken." << endl;
								if (ans == y) {
									cout << "5) Isolate and minimize the memory configuration." << endl;
									cout << "Does condition still exists? \nAns (Y/N) :";
									cin >> ans;
									if ((ans != y) && (ans != n))
										cout << "Input error!" << endl;
									else
									{
										if (ans == n)
											cout << "1) Record action taken." << endl;
										if (ans == y) {
											cout << "Break server down to minimal configuration." << endl;
											cout << "Does condition still exists? \nAns (Y/N) :";
											cin >> ans;
											if ((ans != y) && (ans != n))
												cout << "Input error!" << endl;
											else {
												if (ans == n) {
													cout << "6) Add one part at a time back to configuration to isolate faulty component." << endl;
													cout << "Does condition still exists? \nAns (Y/N) :";
													cin >> ans;
													if ((ans != y) && (ans != n))
														cout << "Input error!" << endl;
													else {
														if (ans == n)
															cout << "1) Record action taken." << endl;
														if (ans == y) {
															cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
															cout << "Call HP Service Provider." << endl;
														}
													}
												}
												if (ans == y) {
													cout << "7) Troubleshoot or replace basic server spare parts." << endl;
													cout << "Does condition still exists? \nAns (Y/N) :";
													cin >> ans;
													if ((ans != y) && (ans != n))
														cout << "Input error!" << endl;
													else {
														if (ans == y) {
															cout << "Ensure following information is availiable :\n\n1) Survey configuration snapshots.\n2) OS event log file.\n3) Full crash dump." << endl;
															cout << "Call HP Service Provider." << endl;
														}
														if (ans == n)
															cout << "Record Symptom & error information on repair tag if sending back a failed part." << endl;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (ans == n)
						cout << "1) Record action taken." << endl;
				}	
			} 
			system("pause");
			return 0;
}
