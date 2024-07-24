export module Library:Member;
import <string>;


export{
	class Member
	{
	private:
		std::string MemberName;
		int MemberId;

	public:
		Member(const std::string& MemberName="NA", const int& MemberId=-1) :MemberName(MemberName), MemberId(MemberId) {};

		/* Setters */
		void SetMemberName(const std::string& MemberName)
		{
			this->MemberName = MemberName;
		}
		void SetMemberId(const int& MemberId)
		{
			this->MemberId = MemberId;
		}

		/* Getters */
		std::string GetMemberName() const
		{
			return this->MemberName;
		}
		int GetMemberId() const
		{
			return this->MemberId;
		}
	};
}