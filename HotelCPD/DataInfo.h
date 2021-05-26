#pragma once
using namespace System;

public ref class DataInfo {

	private:
		String^ data;
		String^ roomnum;
		String^ stata;
		String^ quanti;

	public:
		void setRoom(String^ adata, String^ aroomnum, String^ astata, String^ aquanti) {

			data = adata;
			roomnum = aroomnum;
			stata = astata;
			quanti = aquanti;

		}

		String^ getdata() {
			return data;
		}

		String^ getaroomnum() {
			return roomnum;
		}

		String^ getstata() {
			return stata;
		}

		String^ getquanti() {
			return  quanti;
		}

};