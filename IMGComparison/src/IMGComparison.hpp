#include <opencv2/opencv.hpp>
#include <string>
#include <vector>
#include <algorithm>

using namespace cv;
using namespace std;

namespace IMGComparison
{
	class IMG
	{
	public:
		bool IsImageTheSame(string Image1, string Image2)
		{
			Mat Compare1 = LoadImage(Image1, 0);
			Mat Compare2 = LoadImage(Image2, 0);
			Mat dst;
			bitwise_xor(Compare1, Compare2, dst);
			if (countNonZero(dst) > 0)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	private:
		Mat LoadImage(string File, int how)
		{
			Mat IMG = imread(File, 0);
			return IMG;
		}
		void AllIMGSame(vector<LPCWSTR> TheVector, string Image1, string Image2)
		{
			Mat Compare1 = imread(Image1);
			Mat Compare2 = imread(Image2);
			Mat dst;
			bitwise_xor(Compare1, Compare2, dst);
			
			if (countNonZero(dst) > 0)
			{
				exit(0);
			}
			else
			{
				wstring CreateLPCWSTR = wstring(Image2.begin(), Image2.end());
				LPCWSTR GetRidOfMe = CreateLPCWSTR.c_str();

				TheVector.push_back(GetRidOfMe);
			}
		}
	};
}
