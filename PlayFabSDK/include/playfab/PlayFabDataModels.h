#ifndef PLAYFAB_ALL_DATA_MODELS_H_
#define PLAYFAB_ALL_DATA_MODELS_H_

#include "playfab/PlayFabBaseModel.h"

namespace PlayFab
{

	
	struct AddServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
		OptionalTime Timestamp;
		bool Active;
		bool DedicatedServerEligible;
		std::list<std::string> ActiveRegions;
		std::string Comment;
	
        AddServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId(),
			Timestamp(),
			Active(false),
			DedicatedServerEligible(false),
			ActiveRegions(),
			Comment()
			{}
		
		AddServerBuildRequest(const AddServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Timestamp(src.Timestamp),
			Active(src.Active),
			DedicatedServerEligible(src.DedicatedServerEligible),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment)
			{}
			
		AddServerBuildRequest(const rapidjson::Value& obj) : AddServerBuildRequest()
        {
            readFromValue(obj);
        }
		
		~AddServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        AddServerBuildResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		AddServerBuildResult(const AddServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		AddServerBuildResult(const rapidjson::Value& obj) : AddServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~AddServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemConsumableInfo : public PlayFabBaseModel
    {
		
		Uint32 UsageCount;
		OptionalUint32 UsagePeriod;
		std::string UsagePeriodGroup;
	
        CatalogItemConsumableInfo() :
			PlayFabBaseModel(),
			UsageCount(0),
			UsagePeriod(),
			UsagePeriodGroup()
			{}
		
		CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
			PlayFabBaseModel(),
			UsageCount(src.UsageCount),
			UsagePeriod(src.UsagePeriod),
			UsagePeriodGroup(src.UsagePeriodGroup)
			{}
			
		CatalogItemConsumableInfo(const rapidjson::Value& obj) : CatalogItemConsumableInfo()
        {
            readFromValue(obj);
        }
		
		~CatalogItemConsumableInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemContainerInfo : public PlayFabBaseModel
    {
		
		std::string KeyItemId;
		std::list<std::string> ItemContents;
		std::list<std::string> ResultTableContents;
		std::map<std::string, Uint32> VirtualCurrencyContents;
	
        CatalogItemContainerInfo() :
			PlayFabBaseModel(),
			KeyItemId(),
			ItemContents(),
			ResultTableContents(),
			VirtualCurrencyContents()
			{}
		
		CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
			PlayFabBaseModel(),
			KeyItemId(src.KeyItemId),
			ItemContents(src.ItemContents),
			ResultTableContents(src.ResultTableContents),
			VirtualCurrencyContents(src.VirtualCurrencyContents)
			{}
			
		CatalogItemContainerInfo(const rapidjson::Value& obj) : CatalogItemContainerInfo()
        {
            readFromValue(obj);
        }
		
		~CatalogItemContainerInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItemBundleInfo : public PlayFabBaseModel
    {
		
		std::list<std::string> BundledItems;
		std::list<std::string> BundledResultTables;
		std::map<std::string, Uint32> BundledVirtualCurrencies;
	
        CatalogItemBundleInfo() :
			PlayFabBaseModel(),
			BundledItems(),
			BundledResultTables(),
			BundledVirtualCurrencies()
			{}
		
		CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
			PlayFabBaseModel(),
			BundledItems(src.BundledItems),
			BundledResultTables(src.BundledResultTables),
			BundledVirtualCurrencies(src.BundledVirtualCurrencies)
			{}
			
		CatalogItemBundleInfo(const rapidjson::Value& obj) : CatalogItemBundleInfo()
        {
            readFromValue(obj);
        }
		
		~CatalogItemBundleInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CatalogItem : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemClass;
		std::string CatalogVersion;
		std::string DisplayName;
		std::string Description;
		std::map<std::string, Uint32> VirtualCurrencyPrices;
		std::map<std::string, Uint32> RealCurrencyPrices;
		OptionalTime ReleaseDate;
		OptionalTime ExpirationDate;
		OptionalBool IsFree;
		OptionalBool NotForSale;
		OptionalBool NotForTrade;
		std::list<std::string> Tags;
		std::string CustomData;
		std::list<std::string> GrantedIfPlayerHas;
		CatalogItemConsumableInfo* Consumable;
		CatalogItemContainerInfo* Container;
		CatalogItemBundleInfo* Bundle;
	
        CatalogItem() :
			PlayFabBaseModel(),
			ItemId(),
			ItemClass(),
			CatalogVersion(),
			DisplayName(),
			Description(),
			VirtualCurrencyPrices(),
			RealCurrencyPrices(),
			ReleaseDate(),
			ExpirationDate(),
			IsFree(),
			NotForSale(),
			NotForTrade(),
			Tags(),
			CustomData(),
			GrantedIfPlayerHas(),
			Consumable(NULL),
			Container(NULL),
			Bundle(NULL)
			{}
		
		CatalogItem(const CatalogItem& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemClass(src.ItemClass),
			CatalogVersion(src.CatalogVersion),
			DisplayName(src.DisplayName),
			Description(src.Description),
			VirtualCurrencyPrices(src.VirtualCurrencyPrices),
			RealCurrencyPrices(src.RealCurrencyPrices),
			ReleaseDate(src.ReleaseDate),
			ExpirationDate(src.ExpirationDate),
			IsFree(src.IsFree),
			NotForSale(src.NotForSale),
			NotForTrade(src.NotForTrade),
			Tags(src.Tags),
			CustomData(src.CustomData),
			GrantedIfPlayerHas(src.GrantedIfPlayerHas),
			Consumable(src.Consumable ? new CatalogItemConsumableInfo(*src.Consumable) : NULL),
			Container(src.Container ? new CatalogItemContainerInfo(*src.Container) : NULL),
			Bundle(src.Bundle ? new CatalogItemBundleInfo(*src.Bundle) : NULL)
			{}
			
		CatalogItem(const rapidjson::Value& obj) : CatalogItem()
        {
            readFromValue(obj);
        }
		
		~CatalogItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum Currency
	{
		CurrencyUSD,
		CurrencyGBP,
		CurrencyEUR,
		CurrencyRUB,
		CurrencyBRL,
		CurrencyCIS,
		CurrencyCAD
	};
	
	void writeCurrencyEnumJSON(Currency enumVal, PFStringJsonWriter& writer);
	Currency readCurrencyFromValue(const rapidjson::Value& obj);
	
	
	struct GameModeInfo : public PlayFabBaseModel
    {
		
		std::string GameMode;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
	
        GameModeInfo() :
			PlayFabBaseModel(),
			GameMode(),
			GameCount(0),
			GamePlayersCount(0)
			{}
		
		GameModeInfo(const GameModeInfo& src) :
			PlayFabBaseModel(),
			GameMode(src.GameMode),
			GameCount(src.GameCount),
			GamePlayersCount(src.GamePlayersCount)
			{}
			
		GameModeInfo(const rapidjson::Value& obj) : GameModeInfo()
        {
            readFromValue(obj);
        }
		
		~GameModeInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
	
        GetCatalogItemsRequest() :
			PlayFabBaseModel(),
			CatalogVersion()
			{}
		
		GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion)
			{}
			
		GetCatalogItemsRequest(const rapidjson::Value& obj) : GetCatalogItemsRequest()
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetCatalogItemsResult : public PlayFabBaseModel
    {
		
		std::list<CatalogItem> Catalog;
	
        GetCatalogItemsResult() :
			PlayFabBaseModel(),
			Catalog()
			{}
		
		GetCatalogItemsResult(const GetCatalogItemsResult& src) :
			PlayFabBaseModel(),
			Catalog(src.Catalog)
			{}
			
		GetCatalogItemsResult(const rapidjson::Value& obj) : GetCatalogItemsResult()
        {
            readFromValue(obj);
        }
		
		~GetCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameInfoRequest : public PlayFabBaseModel
    {
		
		std::string LobbyId;
	
        GetMatchmakerGameInfoRequest() :
			PlayFabBaseModel(),
			LobbyId()
			{}
		
		GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
			PlayFabBaseModel(),
			LobbyId(src.LobbyId)
			{}
			
		GetMatchmakerGameInfoRequest(const rapidjson::Value& obj) : GetMatchmakerGameInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum Region
	{
		RegionUSWest,
		RegionUSCentral,
		RegionUSEast,
		RegionEUWest,
		RegionAPSouthEast,
		RegionAPNorthEast,
		RegionSAEast,
		RegionAustralia,
		RegionChina,
		RegionUberLan
	};
	
	void writeRegionEnumJSON(Region enumVal, PFStringJsonWriter& writer);
	Region readRegionFromValue(const rapidjson::Value& obj);
	
	
	struct GetMatchmakerGameInfoResult : public PlayFabBaseModel
    {
		
		std::string LobbyId;
		std::string TitleId;
		OptionalTime StartTime;
		OptionalTime EndTime;
		std::string Mode;
		std::string BuildVersion;
		Boxed<Region> Region;
		std::list<std::string> Players;
		std::string ServerAddress;
		Uint32 ServerPort;
		std::string StdOutLog;
		std::string StdErrLog;
	
        GetMatchmakerGameInfoResult() :
			PlayFabBaseModel(),
			LobbyId(),
			TitleId(),
			StartTime(),
			EndTime(),
			Mode(),
			BuildVersion(),
			Region(),
			Players(),
			ServerAddress(),
			ServerPort(0),
			StdOutLog(),
			StdErrLog()
			{}
		
		GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
			PlayFabBaseModel(),
			LobbyId(src.LobbyId),
			TitleId(src.TitleId),
			StartTime(src.StartTime),
			EndTime(src.EndTime),
			Mode(src.Mode),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			Players(src.Players),
			ServerAddress(src.ServerAddress),
			ServerPort(src.ServerPort),
			StdOutLog(src.StdOutLog),
			StdErrLog(src.StdErrLog)
			{}
			
		GetMatchmakerGameInfoResult(const rapidjson::Value& obj) : GetMatchmakerGameInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
	
        GetMatchmakerGameModesRequest() :
			PlayFabBaseModel(),
			BuildVersion()
			{}
		
		GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion)
			{}
			
		GetMatchmakerGameModesRequest(const rapidjson::Value& obj) : GetMatchmakerGameModesRequest()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
		std::list<GameModeInfo> GameModes;
	
        GetMatchmakerGameModesResult() :
			PlayFabBaseModel(),
			GameModes()
			{}
		
		GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
			PlayFabBaseModel(),
			GameModes(src.GameModes)
			{}
			
		GetMatchmakerGameModesResult(const rapidjson::Value& obj) : GetMatchmakerGameModesResult()
        {
            readFromValue(obj);
        }
		
		~GetMatchmakerGameModesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesRequest : public PlayFabBaseModel
    {
		
	
        GetRandomResultTablesRequest() :
			PlayFabBaseModel()
			{}
		
		GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetRandomResultTablesRequest(const rapidjson::Value& obj) : GetRandomResultTablesRequest()
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum ResultTableNodeType
	{
		ResultTableNodeTypeItemId,
		ResultTableNodeTypeTableId
	};
	
	void writeResultTableNodeTypeEnumJSON(ResultTableNodeType enumVal, PFStringJsonWriter& writer);
	ResultTableNodeType readResultTableNodeTypeFromValue(const rapidjson::Value& obj);
	
	
	struct ResultTableNode : public PlayFabBaseModel
    {
		
		ResultTableNodeType ResultItemType;
		std::string ResultItem;
		Int32 Weight;
	
        ResultTableNode() :
			PlayFabBaseModel(),
			ResultItemType(),
			ResultItem(),
			Weight(0)
			{}
		
		ResultTableNode(const ResultTableNode& src) :
			PlayFabBaseModel(),
			ResultItemType(src.ResultItemType),
			ResultItem(src.ResultItem),
			Weight(src.Weight)
			{}
			
		ResultTableNode(const rapidjson::Value& obj) : ResultTableNode()
        {
            readFromValue(obj);
        }
		
		~ResultTableNode();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RandomResultTable : public PlayFabBaseModel
    {
		
		std::string TableId;
		std::list<ResultTableNode> Nodes;
	
        RandomResultTable() :
			PlayFabBaseModel(),
			TableId(),
			Nodes()
			{}
		
		RandomResultTable(const RandomResultTable& src) :
			PlayFabBaseModel(),
			TableId(src.TableId),
			Nodes(src.Nodes)
			{}
			
		RandomResultTable(const rapidjson::Value& obj) : RandomResultTable()
        {
            readFromValue(obj);
        }
		
		~RandomResultTable();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetRandomResultTablesResult : public PlayFabBaseModel
    {
		
		std::map<std::string, RandomResultTable> Tables;
	
        GetRandomResultTablesResult() :
			PlayFabBaseModel(),
			Tables()
			{}
		
		GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
			PlayFabBaseModel(),
			Tables(src.Tables)
			{}
			
		GetRandomResultTablesResult(const rapidjson::Value& obj) : GetRandomResultTablesResult()
        {
            readFromValue(obj);
        }
		
		~GetRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetServerBuildInfoRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        GetServerBuildInfoRequest() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		GetServerBuildInfoRequest(const rapidjson::Value& obj) : GetServerBuildInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetServerBuildInfoResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        GetServerBuildInfoResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		GetServerBuildInfoResult(const rapidjson::Value& obj) : GetServerBuildInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetServerBuildInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetTitleDataRequest() :
			PlayFabBaseModel(),
			Keys()
			{}
		
		GetTitleDataRequest(const GetTitleDataRequest& src) :
			PlayFabBaseModel(),
			Keys(src.Keys)
			{}
			
		GetTitleDataRequest(const rapidjson::Value& obj) : GetTitleDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetTitleDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        GetTitleDataResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetTitleDataResult(const GetTitleDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetTitleDataResult(const rapidjson::Value& obj) : GetTitleDataResult()
        {
            readFromValue(obj);
        }
		
		~GetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserAccountInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
	
        GetUserAccountInfoRequest() :
			PlayFabBaseModel(),
			PlayFabId()
			{}
		
		GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId)
			{}
			
		GetUserAccountInfoRequest(const rapidjson::Value& obj) : GetUserAccountInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserAccountInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum UserOrigination
	{
		UserOriginationOrganic,
		UserOriginationSteam,
		UserOriginationGoogle,
		UserOriginationAmazon,
		UserOriginationFacebook,
		UserOriginationKongregate,
		UserOriginationGamersFirst,
		UserOriginationUnknown,
		UserOriginationIOS,
		UserOriginationLoadTest,
		UserOriginationAndroid
	};
	
	void writeUserOriginationEnumJSON(UserOrigination enumVal, PFStringJsonWriter& writer);
	UserOrigination readUserOriginationFromValue(const rapidjson::Value& obj);
	
	
	struct UserTitleInfo : public PlayFabBaseModel
    {
		
		std::string DisplayName;
		Boxed<UserOrigination> Origination;
		OptionalTime Created;
		OptionalTime LastLogin;
		OptionalTime FirstLogin;
	
        UserTitleInfo() :
			PlayFabBaseModel(),
			DisplayName(),
			Origination(),
			Created(),
			LastLogin(),
			FirstLogin()
			{}
		
		UserTitleInfo(const UserTitleInfo& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName),
			Origination(src.Origination),
			Created(src.Created),
			LastLogin(src.LastLogin),
			FirstLogin(src.FirstLogin)
			{}
			
		UserTitleInfo(const rapidjson::Value& obj) : UserTitleInfo()
        {
            readFromValue(obj);
        }
		
		~UserTitleInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserPrivateAccountInfo : public PlayFabBaseModel
    {
		
		std::string Email;
	
        UserPrivateAccountInfo() :
			PlayFabBaseModel(),
			Email()
			{}
		
		UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
			PlayFabBaseModel(),
			Email(src.Email)
			{}
			
		UserPrivateAccountInfo(const rapidjson::Value& obj) : UserPrivateAccountInfo()
        {
            readFromValue(obj);
        }
		
		~UserPrivateAccountInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserFacebookInfo : public PlayFabBaseModel
    {
		
		std::string FacebookId;
		std::string FacebookUsername;
		std::string FacebookDisplayname;
	
        UserFacebookInfo() :
			PlayFabBaseModel(),
			FacebookId(),
			FacebookUsername(),
			FacebookDisplayname()
			{}
		
		UserFacebookInfo(const UserFacebookInfo& src) :
			PlayFabBaseModel(),
			FacebookId(src.FacebookId),
			FacebookUsername(src.FacebookUsername),
			FacebookDisplayname(src.FacebookDisplayname)
			{}
			
		UserFacebookInfo(const rapidjson::Value& obj) : UserFacebookInfo()
        {
            readFromValue(obj);
        }
		
		~UserFacebookInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum TitleActivationStatus
	{
		TitleActivationStatusNone,
		TitleActivationStatusActivatedTitleKey,
		TitleActivationStatusPendingSteam,
		TitleActivationStatusActivatedSteam,
		TitleActivationStatusRevokedSteam
	};
	
	void writeTitleActivationStatusEnumJSON(TitleActivationStatus enumVal, PFStringJsonWriter& writer);
	TitleActivationStatus readTitleActivationStatusFromValue(const rapidjson::Value& obj);
	
	
	struct UserSteamInfo : public PlayFabBaseModel
    {
		
		std::string SteamId;
		std::string SteamCountry;
		Boxed<Currency> SteamCurrency;
		Boxed<TitleActivationStatus> SteamActivationStatus;
	
        UserSteamInfo() :
			PlayFabBaseModel(),
			SteamId(),
			SteamCountry(),
			SteamCurrency(),
			SteamActivationStatus()
			{}
		
		UserSteamInfo(const UserSteamInfo& src) :
			PlayFabBaseModel(),
			SteamId(src.SteamId),
			SteamCountry(src.SteamCountry),
			SteamCurrency(src.SteamCurrency),
			SteamActivationStatus(src.SteamActivationStatus)
			{}
			
		UserSteamInfo(const rapidjson::Value& obj) : UserSteamInfo()
        {
            readFromValue(obj);
        }
		
		~UserSteamInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserGameCenterInfo : public PlayFabBaseModel
    {
		
		std::string GameCenterId;
	
        UserGameCenterInfo() :
			PlayFabBaseModel(),
			GameCenterId()
			{}
		
		UserGameCenterInfo(const UserGameCenterInfo& src) :
			PlayFabBaseModel(),
			GameCenterId(src.GameCenterId)
			{}
			
		UserGameCenterInfo(const rapidjson::Value& obj) : UserGameCenterInfo()
        {
            readFromValue(obj);
        }
		
		~UserGameCenterInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserAccountInfo : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		OptionalTime Created;
		std::string Username;
		UserTitleInfo* TitleInfo;
		UserPrivateAccountInfo* PrivateInfo;
		UserFacebookInfo* FacebookInfo;
		UserSteamInfo* SteamInfo;
		UserGameCenterInfo* GameCenterInfo;
	
        UserAccountInfo() :
			PlayFabBaseModel(),
			PlayFabId(),
			Created(),
			Username(),
			TitleInfo(NULL),
			PrivateInfo(NULL),
			FacebookInfo(NULL),
			SteamInfo(NULL),
			GameCenterInfo(NULL)
			{}
		
		UserAccountInfo(const UserAccountInfo& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			Created(src.Created),
			Username(src.Username),
			TitleInfo(src.TitleInfo ? new UserTitleInfo(*src.TitleInfo) : NULL),
			PrivateInfo(src.PrivateInfo ? new UserPrivateAccountInfo(*src.PrivateInfo) : NULL),
			FacebookInfo(src.FacebookInfo ? new UserFacebookInfo(*src.FacebookInfo) : NULL),
			SteamInfo(src.SteamInfo ? new UserSteamInfo(*src.SteamInfo) : NULL),
			GameCenterInfo(src.GameCenterInfo ? new UserGameCenterInfo(*src.GameCenterInfo) : NULL)
			{}
			
		UserAccountInfo(const rapidjson::Value& obj) : UserAccountInfo()
        {
            readFromValue(obj);
        }
		
		~UserAccountInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* UserInfo;
	
        GetUserAccountInfoResult() :
			PlayFabBaseModel(),
			UserInfo(NULL)
			{}
		
		GetUserAccountInfoResult(const GetUserAccountInfoResult& src) :
			PlayFabBaseModel(),
			UserInfo(src.UserInfo ? new UserAccountInfo(*src.UserInfo) : NULL)
			{}
			
		GetUserAccountInfoResult(const rapidjson::Value& obj) : GetUserAccountInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetUserAccountInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryRequest : public PlayFabBaseModel
    {
		
	
        GetUserInventoryRequest() :
			PlayFabBaseModel()
			{}
		
		GetUserInventoryRequest(const GetUserInventoryRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetUserInventoryRequest(const rapidjson::Value& obj) : GetUserInventoryRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemInstance : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemInstanceId;
		std::string ItemClass;
		std::string PurchaseDate;
		std::string Expiration;
		OptionalUint32 RemainingUses;
		std::string Annotation;
		std::string CatalogVersion;
		std::string BundleParent;
	
        ItemInstance() :
			PlayFabBaseModel(),
			ItemId(),
			ItemInstanceId(),
			ItemClass(),
			PurchaseDate(),
			Expiration(),
			RemainingUses(),
			Annotation(),
			CatalogVersion(),
			BundleParent()
			{}
		
		ItemInstance(const ItemInstance& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemInstanceId(src.ItemInstanceId),
			ItemClass(src.ItemClass),
			PurchaseDate(src.PurchaseDate),
			Expiration(src.Expiration),
			RemainingUses(src.RemainingUses),
			Annotation(src.Annotation),
			CatalogVersion(src.CatalogVersion),
			BundleParent(src.BundleParent)
			{}
			
		ItemInstance(const rapidjson::Value& obj) : ItemInstance()
        {
            readFromValue(obj);
        }
		
		~ItemInstance();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserInventoryResult : public PlayFabBaseModel
    {
		
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
	
        GetUserInventoryResult() :
			PlayFabBaseModel(),
			Inventory(),
			VirtualCurrency()
			{}
		
		GetUserInventoryResult(const GetUserInventoryResult& src) :
			PlayFabBaseModel(),
			Inventory(src.Inventory),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		GetUserInventoryResult(const rapidjson::Value& obj) : GetUserInventoryResult()
        {
            readFromValue(obj);
        }
		
		~GetUserInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsRequest : public PlayFabBaseModel
    {
		
	
        ListBuildsRequest() :
			PlayFabBaseModel()
			{}
		
		ListBuildsRequest(const ListBuildsRequest& src) :
			PlayFabBaseModel()
			{}
			
		ListBuildsRequest(const rapidjson::Value& obj) : ListBuildsRequest()
        {
            readFromValue(obj);
        }
		
		~ListBuildsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ListBuildsResult : public PlayFabBaseModel
    {
		
		std::list<GetServerBuildInfoResult> Builds;
	
        ListBuildsResult() :
			PlayFabBaseModel(),
			Builds()
			{}
		
		ListBuildsResult(const ListBuildsResult& src) :
			PlayFabBaseModel(),
			Builds(src.Builds)
			{}
			
		ListBuildsResult(const rapidjson::Value& obj) : ListBuildsResult()
        {
            readFromValue(obj);
        }
		
		~ListBuildsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::list<GameModeInfo> GameModes;
	
        ModifyMatchmakerGameModesRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			GameModes()
			{}
		
		ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			GameModes(src.GameModes)
			{}
			
		ModifyMatchmakerGameModesRequest(const rapidjson::Value& obj) : ModifyMatchmakerGameModesRequest()
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyMatchmakerGameModesResult : public PlayFabBaseModel
    {
		
	
        ModifyMatchmakerGameModesResult() :
			PlayFabBaseModel()
			{}
		
		ModifyMatchmakerGameModesResult(const ModifyMatchmakerGameModesResult& src) :
			PlayFabBaseModel()
			{}
			
		ModifyMatchmakerGameModesResult(const rapidjson::Value& obj) : ModifyMatchmakerGameModesResult()
        {
            readFromValue(obj);
        }
		
		~ModifyMatchmakerGameModesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
		OptionalTime Timestamp;
		OptionalBool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
	
        ModifyServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId(),
			Timestamp(),
			Active(),
			ActiveRegions(),
			Comment()
			{}
		
		ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Timestamp(src.Timestamp),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment)
			{}
			
		ModifyServerBuildRequest(const rapidjson::Value& obj) : ModifyServerBuildRequest()
        {
            readFromValue(obj);
        }
		
		~ModifyServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
		bool Active;
		std::list<std::string> ActiveRegions;
		std::string Comment;
		OptionalTime Timestamp;
		std::string TitleId;
	
        ModifyServerBuildResult() :
			PlayFabBaseModel(),
			BuildId(),
			Active(false),
			ActiveRegions(),
			Comment(),
			Timestamp(),
			TitleId()
			{}
		
		ModifyServerBuildResult(const ModifyServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId),
			Active(src.Active),
			ActiveRegions(src.ActiveRegions),
			Comment(src.Comment),
			Timestamp(src.Timestamp),
			TitleId(src.TitleId)
			{}
			
		ModifyServerBuildResult(const rapidjson::Value& obj) : ModifyServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~ModifyServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveServerBuildRequest : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        RemoveServerBuildRequest() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		RemoveServerBuildRequest(const rapidjson::Value& obj) : RemoveServerBuildRequest()
        {
            readFromValue(obj);
        }
		
		~RemoveServerBuildRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveServerBuildResult : public PlayFabBaseModel
    {
		
		std::string BuildId;
	
        RemoveServerBuildResult() :
			PlayFabBaseModel(),
			BuildId()
			{}
		
		RemoveServerBuildResult(const RemoveServerBuildResult& src) :
			PlayFabBaseModel(),
			BuildId(src.BuildId)
			{}
			
		RemoveServerBuildResult(const rapidjson::Value& obj) : RemoveServerBuildResult()
        {
            readFromValue(obj);
        }
		
		~RemoveServerBuildResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryItemRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemInstanceId;
	
        RevokeInventoryItemRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			ItemInstanceId()
			{}
		
		RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			ItemInstanceId(src.ItemInstanceId)
			{}
			
		RevokeInventoryItemRequest(const rapidjson::Value& obj) : RevokeInventoryItemRequest()
        {
            readFromValue(obj);
        }
		
		~RevokeInventoryItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RevokeInventoryResult : public PlayFabBaseModel
    {
		
	
        RevokeInventoryResult() :
			PlayFabBaseModel()
			{}
		
		RevokeInventoryResult(const RevokeInventoryResult& src) :
			PlayFabBaseModel()
			{}
			
		RevokeInventoryResult(const rapidjson::Value& obj) : RevokeInventoryResult()
        {
            readFromValue(obj);
        }
		
		~RevokeInventoryResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailRequest : public PlayFabBaseModel
    {
		
		std::string Email;
		std::string TitleId;
	
        SendAccountRecoveryEmailRequest() :
			PlayFabBaseModel(),
			Email(),
			TitleId()
			{}
		
		SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
			PlayFabBaseModel(),
			Email(src.Email),
			TitleId(src.TitleId)
			{}
			
		SendAccountRecoveryEmailRequest(const rapidjson::Value& obj) : SendAccountRecoveryEmailRequest()
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SendAccountRecoveryEmailResult : public PlayFabBaseModel
    {
		
	
        SendAccountRecoveryEmailResult() :
			PlayFabBaseModel()
			{}
		
		SendAccountRecoveryEmailResult(const SendAccountRecoveryEmailResult& src) :
			PlayFabBaseModel()
			{}
			
		SendAccountRecoveryEmailResult(const rapidjson::Value& obj) : SendAccountRecoveryEmailResult()
        {
            readFromValue(obj);
        }
		
		~SendAccountRecoveryEmailResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetTitleDataRequest : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string Value;
	
        SetTitleDataRequest() :
			PlayFabBaseModel(),
			Key(),
			Value()
			{}
		
		SetTitleDataRequest(const SetTitleDataRequest& src) :
			PlayFabBaseModel(),
			Key(src.Key),
			Value(src.Value)
			{}
			
		SetTitleDataRequest(const rapidjson::Value& obj) : SetTitleDataRequest()
        {
            readFromValue(obj);
        }
		
		~SetTitleDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetTitleDataResult : public PlayFabBaseModel
    {
		
		std::string Key;
		std::string Value;
	
        SetTitleDataResult() :
			PlayFabBaseModel(),
			Key(),
			Value()
			{}
		
		SetTitleDataResult(const SetTitleDataResult& src) :
			PlayFabBaseModel(),
			Key(src.Key),
			Value(src.Value)
			{}
			
		SetTitleDataResult(const rapidjson::Value& obj) : SetTitleDataResult()
        {
            readFromValue(obj);
        }
		
		~SetTitleDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCatalogItemsRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<CatalogItem> CatalogItems;
	
        UpdateCatalogItemsRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			CatalogItems()
			{}
		
		UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			CatalogItems(src.CatalogItems)
			{}
			
		UpdateCatalogItemsRequest(const rapidjson::Value& obj) : UpdateCatalogItemsRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateCatalogItemsResult : public PlayFabBaseModel
    {
		
	
        UpdateCatalogItemsResult() :
			PlayFabBaseModel()
			{}
		
		UpdateCatalogItemsResult(const UpdateCatalogItemsResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateCatalogItemsResult(const rapidjson::Value& obj) : UpdateCatalogItemsResult()
        {
            readFromValue(obj);
        }
		
		~UpdateCatalogItemsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesRequest : public PlayFabBaseModel
    {
		
		std::list<RandomResultTable> Tables;
		std::string TitleId;
	
        UpdateRandomResultTablesRequest() :
			PlayFabBaseModel(),
			Tables(),
			TitleId()
			{}
		
		UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
			PlayFabBaseModel(),
			Tables(src.Tables),
			TitleId(src.TitleId)
			{}
			
		UpdateRandomResultTablesRequest(const rapidjson::Value& obj) : UpdateRandomResultTablesRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateRandomResultTablesResult : public PlayFabBaseModel
    {
		
	
        UpdateRandomResultTablesResult() :
			PlayFabBaseModel()
			{}
		
		UpdateRandomResultTablesResult(const UpdateRandomResultTablesResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateRandomResultTablesResult(const rapidjson::Value& obj) : UpdateRandomResultTablesResult()
        {
            readFromValue(obj);
        }
		
		~UpdateRandomResultTablesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameRequest : public PlayFabBaseModel
    {
		
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameRequest() :
			PlayFabBaseModel(),
			DisplayName()
			{}
		
		UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName)
			{}
			
		UpdateUserTitleDisplayNameRequest(const rapidjson::Value& obj) : UpdateUserTitleDisplayNameRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateUserTitleDisplayNameRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserTitleDisplayNameResult : public PlayFabBaseModel
    {
		
		std::string DisplayName;
	
        UpdateUserTitleDisplayNameResult() :
			PlayFabBaseModel(),
			DisplayName()
			{}
		
		UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
			PlayFabBaseModel(),
			DisplayName(src.DisplayName)
			{}
			
		UpdateUserTitleDisplayNameResult(const rapidjson::Value& obj) : UpdateUserTitleDisplayNameResult()
        {
            readFromValue(obj);
        }
		
		~UpdateUserTitleDisplayNameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AuthUserRequest : public PlayFabBaseModel
    {
		
		std::string AuthorizationTicket;
	
        AuthUserRequest() :
			PlayFabBaseModel(),
			AuthorizationTicket()
			{}
		
		AuthUserRequest(const AuthUserRequest& src) :
			PlayFabBaseModel(),
			AuthorizationTicket(src.AuthorizationTicket)
			{}
			
		AuthUserRequest(const rapidjson::Value& obj) : AuthUserRequest()
        {
            readFromValue(obj);
        }
		
		~AuthUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AuthUserResponse : public PlayFabBaseModel
    {
		
		bool Authorized;
		std::string PlayFabId;
	
        AuthUserResponse() :
			PlayFabBaseModel(),
			Authorized(false),
			PlayFabId()
			{}
		
		AuthUserResponse(const AuthUserResponse& src) :
			PlayFabBaseModel(),
			Authorized(src.Authorized),
			PlayFabId(src.PlayFabId)
			{}
			
		AuthUserResponse(const rapidjson::Value& obj) : AuthUserResponse()
        {
            readFromValue(obj);
        }
		
		~AuthUserResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerJoinedRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        PlayerJoinedRequest() :
			PlayFabBaseModel(),
			ServerId(),
			PlayFabId()
			{}
		
		PlayerJoinedRequest(const PlayerJoinedRequest& src) :
			PlayFabBaseModel(),
			ServerId(src.ServerId),
			PlayFabId(src.PlayFabId)
			{}
			
		PlayerJoinedRequest(const rapidjson::Value& obj) : PlayerJoinedRequest()
        {
            readFromValue(obj);
        }
		
		~PlayerJoinedRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerJoinedResponse : public PlayFabBaseModel
    {
		
	
        PlayerJoinedResponse() :
			PlayFabBaseModel()
			{}
		
		PlayerJoinedResponse(const PlayerJoinedResponse& src) :
			PlayFabBaseModel()
			{}
			
		PlayerJoinedResponse(const rapidjson::Value& obj) : PlayerJoinedResponse()
        {
            readFromValue(obj);
        }
		
		~PlayerJoinedResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerLeftRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        PlayerLeftRequest() :
			PlayFabBaseModel(),
			ServerId(),
			PlayFabId()
			{}
		
		PlayerLeftRequest(const PlayerLeftRequest& src) :
			PlayFabBaseModel(),
			ServerId(src.ServerId),
			PlayFabId(src.PlayFabId)
			{}
			
		PlayerLeftRequest(const rapidjson::Value& obj) : PlayerLeftRequest()
        {
            readFromValue(obj);
        }
		
		~PlayerLeftRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlayerLeftResponse : public PlayFabBaseModel
    {
		
	
        PlayerLeftResponse() :
			PlayFabBaseModel()
			{}
		
		PlayerLeftResponse(const PlayerLeftResponse& src) :
			PlayFabBaseModel()
			{}
			
		PlayerLeftResponse(const rapidjson::Value& obj) : PlayerLeftResponse()
        {
            readFromValue(obj);
        }
		
		~PlayerLeftResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Region Region;
		std::string GameMode;
		bool PasswordRestricted;
		std::string ReplayLobbyId;
	
        StartGameRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			Region(),
			GameMode(),
			PasswordRestricted(false),
			ReplayLobbyId()
			{}
		
		StartGameRequest(const StartGameRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			GameMode(src.GameMode),
			PasswordRestricted(src.PasswordRestricted),
			ReplayLobbyId(src.ReplayLobbyId)
			{}
			
		StartGameRequest(const rapidjson::Value& obj) : StartGameRequest()
        {
            readFromValue(obj);
        }
		
		~StartGameRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameResponse : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		Boxed<Region> Region;
		Uint32 GameMode;
		std::string Build;
		std::string Address;
		Uint32 Port;
	
        StartGameResponse() :
			PlayFabBaseModel(),
			LobbyID(),
			Region(),
			GameMode(0),
			Build(),
			Address(),
			Port(0)
			{}
		
		StartGameResponse(const StartGameResponse& src) :
			PlayFabBaseModel(),
			LobbyID(src.LobbyID),
			Region(src.Region),
			GameMode(src.GameMode),
			Build(src.Build),
			Address(src.Address),
			Port(src.Port)
			{}
			
		StartGameResponse(const rapidjson::Value& obj) : StartGameResponse()
        {
            readFromValue(obj);
        }
		
		~StartGameResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserInfoRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		Uint32 MinCatalogVersion;
	
        UserInfoRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			MinCatalogVersion(0)
			{}
		
		UserInfoRequest(const UserInfoRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			MinCatalogVersion(src.MinCatalogVersion)
			{}
			
		UserInfoRequest(const rapidjson::Value& obj) : UserInfoRequest()
        {
            readFromValue(obj);
        }
		
		~UserInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UserInfoResponse : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string Username;
		std::string TitleDisplayName;
		std::list<ItemInstance> Inventory;
		std::map<std::string, Int32> VirtualCurrency;
		bool IsDeveloper;
		std::string SteamId;
	
        UserInfoResponse() :
			PlayFabBaseModel(),
			PlayFabId(),
			Username(),
			TitleDisplayName(),
			Inventory(),
			VirtualCurrency(),
			IsDeveloper(false),
			SteamId()
			{}
		
		UserInfoResponse(const UserInfoResponse& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			Username(src.Username),
			TitleDisplayName(src.TitleDisplayName),
			Inventory(src.Inventory),
			VirtualCurrency(src.VirtualCurrency),
			IsDeveloper(src.IsDeveloper),
			SteamId(src.SteamId)
			{}
			
		UserInfoResponse(const rapidjson::Value& obj) : UserInfoResponse()
        {
            readFromValue(obj);
        }
		
		~UserInfoResponse();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string VirtualCurrency;
		Int32 Amount;
	
        AddUserVirtualCurrencyRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			VirtualCurrency(),
			Amount(0)
			{}
		
		AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			VirtualCurrency(src.VirtualCurrency),
			Amount(src.Amount)
			{}
			
		AddUserVirtualCurrencyRequest(const rapidjson::Value& obj) : AddUserVirtualCurrencyRequest()
        {
            readFromValue(obj);
        }
		
		~AddUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementItem : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string AchievementName;
		bool Result;
	
        AwardSteamAchievementItem() :
			PlayFabBaseModel(),
			PlayFabId(),
			AchievementName(),
			Result(false)
			{}
		
		AwardSteamAchievementItem(const AwardSteamAchievementItem& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			AchievementName(src.AchievementName),
			Result(src.Result)
			{}
			
		AwardSteamAchievementItem(const rapidjson::Value& obj) : AwardSteamAchievementItem()
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementRequest : public PlayFabBaseModel
    {
		
		std::list<AwardSteamAchievementItem> Achievements;
	
        AwardSteamAchievementRequest() :
			PlayFabBaseModel(),
			Achievements()
			{}
		
		AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src) :
			PlayFabBaseModel(),
			Achievements(src.Achievements)
			{}
			
		AwardSteamAchievementRequest(const rapidjson::Value& obj) : AwardSteamAchievementRequest()
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AwardSteamAchievementResult : public PlayFabBaseModel
    {
		
		std::list<AwardSteamAchievementItem> AchievementResults;
	
        AwardSteamAchievementResult() :
			PlayFabBaseModel(),
			AchievementResults()
			{}
		
		AwardSteamAchievementResult(const AwardSteamAchievementResult& src) :
			PlayFabBaseModel(),
			AchievementResults(src.AchievementResults)
			{}
			
		AwardSteamAchievementResult(const rapidjson::Value& obj) : AwardSteamAchievementResult()
        {
            readFromValue(obj);
        }
		
		~AwardSteamAchievementResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataRequest : public PlayFabBaseModel
    {
		
		std::list<std::string> Keys;
	
        GetUserDataRequest() :
			PlayFabBaseModel(),
			Keys()
			{}
		
		GetUserDataRequest(const GetUserDataRequest& src) :
			PlayFabBaseModel(),
			Keys(src.Keys)
			{}
			
		GetUserDataRequest(const rapidjson::Value& obj) : GetUserDataRequest()
        {
            readFromValue(obj);
        }
		
		~GetUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetUserDataResult : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        GetUserDataResult() :
			PlayFabBaseModel(),
			Data()
			{}
		
		GetUserDataResult(const GetUserDataResult& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		GetUserDataResult(const rapidjson::Value& obj) : GetUserDataResult()
        {
            readFromValue(obj);
        }
		
		~GetUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemGrant : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemId;
		std::string Annotation;
	
        ItemGrant() :
			PlayFabBaseModel(),
			PlayFabId(),
			ItemId(),
			Annotation()
			{}
		
		ItemGrant(const ItemGrant& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			ItemId(src.ItemId),
			Annotation(src.Annotation)
			{}
			
		ItemGrant(const rapidjson::Value& obj) : ItemGrant()
        {
            readFromValue(obj);
        }
		
		~ItemGrant();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantItemsToUsersRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<ItemGrant> ItemGrants;
	
        GrantItemsToUsersRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			ItemGrants()
			{}
		
		GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			ItemGrants(src.ItemGrants)
			{}
			
		GrantItemsToUsersRequest(const rapidjson::Value& obj) : GrantItemsToUsersRequest()
        {
            readFromValue(obj);
        }
		
		~GrantItemsToUsersRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemGrantResult : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string ItemId;
		std::string Annotation;
		bool Result;
	
        ItemGrantResult() :
			PlayFabBaseModel(),
			PlayFabId(),
			ItemId(),
			Annotation(),
			Result(false)
			{}
		
		ItemGrantResult(const ItemGrantResult& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			ItemId(src.ItemId),
			Annotation(src.Annotation),
			Result(src.Result)
			{}
			
		ItemGrantResult(const rapidjson::Value& obj) : ItemGrantResult()
        {
            readFromValue(obj);
        }
		
		~ItemGrantResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GrantItemsToUsersResult : public PlayFabBaseModel
    {
		
		std::list<ItemGrantResult> ItemGrantResults;
	
        GrantItemsToUsersResult() :
			PlayFabBaseModel(),
			ItemGrantResults()
			{}
		
		GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
			PlayFabBaseModel(),
			ItemGrantResults(src.ItemGrantResults)
			{}
			
		GrantItemsToUsersResult(const rapidjson::Value& obj) : GrantItemsToUsersResult()
        {
            readFromValue(obj);
        }
		
		~GrantItemsToUsersResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ModifyUserVirtualCurrencyResult : public PlayFabBaseModel
    {
		
		std::string VirtualCurrency;
		Int32 Balance;
	
        ModifyUserVirtualCurrencyResult() :
			PlayFabBaseModel(),
			VirtualCurrency(),
			Balance(0)
			{}
		
		ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
			PlayFabBaseModel(),
			VirtualCurrency(src.VirtualCurrency),
			Balance(src.Balance)
			{}
			
		ModifyUserVirtualCurrencyResult(const rapidjson::Value& obj) : ModifyUserVirtualCurrencyResult()
        {
            readFromValue(obj);
        }
		
		~ModifyUserVirtualCurrencyResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct NotifyMatchmakerPlayerLeftRequest : public PlayFabBaseModel
    {
		
		std::string ServerId;
		std::string PlayFabId;
	
        NotifyMatchmakerPlayerLeftRequest() :
			PlayFabBaseModel(),
			ServerId(),
			PlayFabId()
			{}
		
		NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src) :
			PlayFabBaseModel(),
			ServerId(src.ServerId),
			PlayFabId(src.PlayFabId)
			{}
			
		NotifyMatchmakerPlayerLeftRequest(const rapidjson::Value& obj) : NotifyMatchmakerPlayerLeftRequest()
        {
            readFromValue(obj);
        }
		
		~NotifyMatchmakerPlayerLeftRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum PlayerConnectionState
	{
		PlayerConnectionStateUnassigned,
		PlayerConnectionStateConnecting,
		PlayerConnectionStateParticipating,
		PlayerConnectionStateParticipated,
		PlayerConnectionStateReconnecting
	};
	
	void writePlayerConnectionStateEnumJSON(PlayerConnectionState enumVal, PFStringJsonWriter& writer);
	PlayerConnectionState readPlayerConnectionStateFromValue(const rapidjson::Value& obj);
	
	
	struct NotifyMatchmakerPlayerLeftResult : public PlayFabBaseModel
    {
		
		Boxed<PlayerConnectionState> PlayerState;
	
        NotifyMatchmakerPlayerLeftResult() :
			PlayFabBaseModel(),
			PlayerState()
			{}
		
		NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src) :
			PlayFabBaseModel(),
			PlayerState(src.PlayerState)
			{}
			
		NotifyMatchmakerPlayerLeftResult(const rapidjson::Value& obj) : NotifyMatchmakerPlayerLeftResult()
        {
            readFromValue(obj);
        }
		
		~NotifyMatchmakerPlayerLeftResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemMatchmakerTicketRequest : public PlayFabBaseModel
    {
		
		std::string Ticket;
		std::string IP;
		std::string ServerId;
	
        RedeemMatchmakerTicketRequest() :
			PlayFabBaseModel(),
			Ticket(),
			IP(),
			ServerId()
			{}
		
		RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src) :
			PlayFabBaseModel(),
			Ticket(src.Ticket),
			IP(src.IP),
			ServerId(src.ServerId)
			{}
			
		RedeemMatchmakerTicketRequest(const rapidjson::Value& obj) : RedeemMatchmakerTicketRequest()
        {
            readFromValue(obj);
        }
		
		~RedeemMatchmakerTicketRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemMatchmakerTicketResult : public PlayFabBaseModel
    {
		
		bool TicketIsValid;
		std::string Error;
		UserAccountInfo* UserInfo;
	
        RedeemMatchmakerTicketResult() :
			PlayFabBaseModel(),
			TicketIsValid(false),
			Error(),
			UserInfo(NULL)
			{}
		
		RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src) :
			PlayFabBaseModel(),
			TicketIsValid(src.TicketIsValid),
			Error(src.Error),
			UserInfo(src.UserInfo ? new UserAccountInfo(*src.UserInfo) : NULL)
			{}
			
		RedeemMatchmakerTicketResult(const rapidjson::Value& obj) : RedeemMatchmakerTicketResult()
        {
            readFromValue(obj);
        }
		
		~RedeemMatchmakerTicketResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SubtractUserVirtualCurrencyRequest : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string VirtualCurrency;
		Int32 Amount;
	
        SubtractUserVirtualCurrencyRequest() :
			PlayFabBaseModel(),
			PlayFabId(),
			VirtualCurrency(),
			Amount(0)
			{}
		
		SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			VirtualCurrency(src.VirtualCurrency),
			Amount(src.Amount)
			{}
			
		SubtractUserVirtualCurrencyRequest(const rapidjson::Value& obj) : SubtractUserVirtualCurrencyRequest()
        {
            readFromValue(obj);
        }
		
		~SubtractUserVirtualCurrencyRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataRequest : public PlayFabBaseModel
    {
		
		std::map<std::string, std::string> Data;
	
        UpdateUserDataRequest() :
			PlayFabBaseModel(),
			Data()
			{}
		
		UpdateUserDataRequest(const UpdateUserDataRequest& src) :
			PlayFabBaseModel(),
			Data(src.Data)
			{}
			
		UpdateUserDataRequest(const rapidjson::Value& obj) : UpdateUserDataRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateUserDataResult : public PlayFabBaseModel
    {
		
	
        UpdateUserDataResult() :
			PlayFabBaseModel()
			{}
		
		UpdateUserDataResult(const UpdateUserDataResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateUserDataResult(const rapidjson::Value& obj) : UpdateUserDataResult()
        {
            readFromValue(obj);
        }
		
		~UpdateUserDataResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::string FriendUsername;
		std::string FriendEmail;
		std::string FriendTitleDisplayName;
	
        AddFriendRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			FriendUsername(),
			FriendEmail(),
			FriendTitleDisplayName()
			{}
		
		AddFriendRequest(const AddFriendRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			FriendUsername(src.FriendUsername),
			FriendEmail(src.FriendEmail),
			FriendTitleDisplayName(src.FriendTitleDisplayName)
			{}
			
		AddFriendRequest(const rapidjson::Value& obj) : AddFriendRequest()
        {
            readFromValue(obj);
        }
		
		~AddFriendRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AddFriendResult : public PlayFabBaseModel
    {
		
		bool Created;
	
        AddFriendResult() :
			PlayFabBaseModel(),
			Created(false)
			{}
		
		AddFriendResult(const AddFriendResult& src) :
			PlayFabBaseModel(),
			Created(src.Created)
			{}
			
		AddFriendResult(const rapidjson::Value& obj) : AddFriendResult()
        {
            readFromValue(obj);
        }
		
		~AddFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
	
        AndroidDevicePushNotificationRegistrationRequest() :
			PlayFabBaseModel(),
			DeviceToken()
			{}
		
		AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src) :
			PlayFabBaseModel(),
			DeviceToken(src.DeviceToken)
			{}
			
		AndroidDevicePushNotificationRegistrationRequest(const rapidjson::Value& obj) : AndroidDevicePushNotificationRegistrationRequest()
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct AndroidDevicePushNotificationRegistrationResult : public PlayFabBaseModel
    {
		
	
        AndroidDevicePushNotificationRegistrationResult() :
			PlayFabBaseModel()
			{}
		
		AndroidDevicePushNotificationRegistrationResult(const AndroidDevicePushNotificationRegistrationResult& src) :
			PlayFabBaseModel()
			{}
			
		AndroidDevicePushNotificationRegistrationResult(const rapidjson::Value& obj) : AndroidDevicePushNotificationRegistrationResult()
        {
            readFromValue(obj);
        }
		
		~AndroidDevicePushNotificationRegistrationResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CartItem : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string ItemClass;
		std::string ItemInstanceId;
		std::string DisplayName;
		std::string Description;
		std::map<std::string, Uint32> VirtualCurrencyPrices;
		std::map<std::string, Uint32> RealCurrencyPrices;
		std::map<std::string, Uint32> VCAmount;
	
        CartItem() :
			PlayFabBaseModel(),
			ItemId(),
			ItemClass(),
			ItemInstanceId(),
			DisplayName(),
			Description(),
			VirtualCurrencyPrices(),
			RealCurrencyPrices(),
			VCAmount()
			{}
		
		CartItem(const CartItem& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			ItemClass(src.ItemClass),
			ItemInstanceId(src.ItemInstanceId),
			DisplayName(src.DisplayName),
			Description(src.Description),
			VirtualCurrencyPrices(src.VirtualCurrencyPrices),
			RealCurrencyPrices(src.RealCurrencyPrices),
			VCAmount(src.VCAmount)
			{}
			
		CartItem(const rapidjson::Value& obj) : CartItem()
        {
            readFromValue(obj);
        }
		
		~CartItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConfirmPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
	
        ConfirmPurchaseRequest() :
			PlayFabBaseModel(),
			OrderId()
			{}
		
		ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId)
			{}
			
		ConfirmPurchaseRequest(const rapidjson::Value& obj) : ConfirmPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~ConfirmPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchasedItem : public PlayFabBaseModel
    {
		
		std::string ItemInstanceId;
		std::string ItemId;
		std::string CatalogVersion;
		std::string DisplayName;
		std::string UnitCurrency;
		Uint32 UnitPrice;
		std::list<std::string> BundleContents;
	
        PurchasedItem() :
			PlayFabBaseModel(),
			ItemInstanceId(),
			ItemId(),
			CatalogVersion(),
			DisplayName(),
			UnitCurrency(),
			UnitPrice(0),
			BundleContents()
			{}
		
		PurchasedItem(const PurchasedItem& src) :
			PlayFabBaseModel(),
			ItemInstanceId(src.ItemInstanceId),
			ItemId(src.ItemId),
			CatalogVersion(src.CatalogVersion),
			DisplayName(src.DisplayName),
			UnitCurrency(src.UnitCurrency),
			UnitPrice(src.UnitPrice),
			BundleContents(src.BundleContents)
			{}
			
		PurchasedItem(const rapidjson::Value& obj) : PurchasedItem()
        {
            readFromValue(obj);
        }
		
		~PurchasedItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ConfirmPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		OptionalTime PurchaseDate;
		std::list<PurchasedItem> Items;
	
        ConfirmPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			PurchaseDate(),
			Items()
			{}
		
		ConfirmPurchaseResult(const ConfirmPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			PurchaseDate(src.PurchaseDate),
			Items(src.Items)
			{}
			
		ConfirmPurchaseResult(const rapidjson::Value& obj) : ConfirmPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~ConfirmPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CurrentGamesRequest : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string BuildVersion;
		std::string IncludeState;
	
        CurrentGamesRequest() :
			PlayFabBaseModel(),
			Region(),
			BuildVersion(),
			IncludeState()
			{}
		
		CurrentGamesRequest(const CurrentGamesRequest& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			BuildVersion(src.BuildVersion),
			IncludeState(src.IncludeState)
			{}
			
		CurrentGamesRequest(const rapidjson::Value& obj) : CurrentGamesRequest()
        {
            readFromValue(obj);
        }
		
		~CurrentGamesRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameInfo : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string LobbyID;
		std::string BuildVersion;
		std::string GameMode;
		std::string Map;
		Int32 MaxPlayers;
		std::list<std::string> PlayerUsernames;
		Uint32 RunTime;
		std::string GameServerState;
		std::string TitleData;
	
        GameInfo() :
			PlayFabBaseModel(),
			Region(),
			LobbyID(),
			BuildVersion(),
			GameMode(),
			Map(),
			MaxPlayers(0),
			PlayerUsernames(),
			RunTime(0),
			GameServerState(),
			TitleData()
			{}
		
		GameInfo(const GameInfo& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			LobbyID(src.LobbyID),
			BuildVersion(src.BuildVersion),
			GameMode(src.GameMode),
			Map(src.Map),
			MaxPlayers(src.MaxPlayers),
			PlayerUsernames(src.PlayerUsernames),
			RunTime(src.RunTime),
			GameServerState(src.GameServerState),
			TitleData(src.TitleData)
			{}
			
		GameInfo(const rapidjson::Value& obj) : GameInfo()
        {
            readFromValue(obj);
        }
		
		~GameInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct CurrentGamesResult : public PlayFabBaseModel
    {
		
		std::list<GameInfo> Games;
		Int32 PlayerCount;
		Int32 GameCount;
		OptionalBool IncompleteResult;
	
        CurrentGamesResult() :
			PlayFabBaseModel(),
			Games(),
			PlayerCount(0),
			GameCount(0),
			IncompleteResult()
			{}
		
		CurrentGamesResult(const CurrentGamesResult& src) :
			PlayFabBaseModel(),
			Games(src.Games),
			PlayerCount(src.PlayerCount),
			GameCount(src.GameCount),
			IncompleteResult(src.IncompleteResult)
			{}
			
		CurrentGamesResult(const rapidjson::Value& obj) : CurrentGamesResult()
        {
            readFromValue(obj);
        }
		
		~CurrentGamesResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct FriendInfo : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::string Username;
		std::string TitleDisplayName;
		std::list<std::string> Tags;
		std::string CurrentMatchmakerLobbyId;
		UserFacebookInfo* FacebookInfo;
		UserSteamInfo* SteamInfo;
		UserGameCenterInfo* GameCenterInfo;
	
        FriendInfo() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			Username(),
			TitleDisplayName(),
			Tags(),
			CurrentMatchmakerLobbyId(),
			FacebookInfo(NULL),
			SteamInfo(NULL),
			GameCenterInfo(NULL)
			{}
		
		FriendInfo(const FriendInfo& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			Username(src.Username),
			TitleDisplayName(src.TitleDisplayName),
			Tags(src.Tags),
			CurrentMatchmakerLobbyId(src.CurrentMatchmakerLobbyId),
			FacebookInfo(src.FacebookInfo ? new UserFacebookInfo(*src.FacebookInfo) : NULL),
			SteamInfo(src.SteamInfo ? new UserSteamInfo(*src.SteamInfo) : NULL),
			GameCenterInfo(src.GameCenterInfo ? new UserGameCenterInfo(*src.GameCenterInfo) : NULL)
			{}
			
		FriendInfo(const rapidjson::Value& obj) : FriendInfo()
        {
            readFromValue(obj);
        }
		
		~FriendInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameServerRegionsRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		std::string TitleId;
	
        GameServerRegionsRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			TitleId()
			{}
		
		GameServerRegionsRequest(const GameServerRegionsRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			TitleId(src.TitleId)
			{}
			
		GameServerRegionsRequest(const rapidjson::Value& obj) : GameServerRegionsRequest()
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionInfo : public PlayFabBaseModel
    {
		
		Boxed<Region> Region;
		std::string Name;
		bool Available;
		std::string PingUrl;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
		std::list<GameModeInfo> GameModes;
	
        RegionInfo() :
			PlayFabBaseModel(),
			Region(),
			Name(),
			Available(false),
			PingUrl(),
			GameCount(0),
			GamePlayersCount(0),
			GameModes()
			{}
		
		RegionInfo(const RegionInfo& src) :
			PlayFabBaseModel(),
			Region(src.Region),
			Name(src.Name),
			Available(src.Available),
			PingUrl(src.PingUrl),
			GameCount(src.GameCount),
			GamePlayersCount(src.GamePlayersCount),
			GameModes(src.GameModes)
			{}
			
		RegionInfo(const rapidjson::Value& obj) : RegionInfo()
        {
            readFromValue(obj);
        }
		
		~RegionInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GameServerRegionsResult : public PlayFabBaseModel
    {
		
		std::list<RegionInfo> Regions;
	
        GameServerRegionsResult() :
			PlayFabBaseModel(),
			Regions()
			{}
		
		GameServerRegionsResult(const GameServerRegionsResult& src) :
			PlayFabBaseModel(),
			Regions(src.Regions)
			{}
			
		GameServerRegionsResult(const rapidjson::Value& obj) : GameServerRegionsResult()
        {
            readFromValue(obj);
        }
		
		~GameServerRegionsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetAccountInfoRequest : public PlayFabBaseModel
    {
		
	
        GetAccountInfoRequest() :
			PlayFabBaseModel()
			{}
		
		GetAccountInfoRequest(const GetAccountInfoRequest& src) :
			PlayFabBaseModel()
			{}
			
		GetAccountInfoRequest(const rapidjson::Value& obj) : GetAccountInfoRequest()
        {
            readFromValue(obj);
        }
		
		~GetAccountInfoRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetAccountInfoResult : public PlayFabBaseModel
    {
		
		UserAccountInfo* AccountInfo;
	
        GetAccountInfoResult() :
			PlayFabBaseModel(),
			AccountInfo(NULL)
			{}
		
		GetAccountInfoResult(const GetAccountInfoResult& src) :
			PlayFabBaseModel(),
			AccountInfo(src.AccountInfo ? new UserAccountInfo(*src.AccountInfo) : NULL)
			{}
			
		GetAccountInfoResult(const rapidjson::Value& obj) : GetAccountInfoResult()
        {
            readFromValue(obj);
        }
		
		~GetAccountInfoResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListRequest : public PlayFabBaseModel
    {
		
		OptionalBool IncludeSteamFriends;
	
        GetFriendsListRequest() :
			PlayFabBaseModel(),
			IncludeSteamFriends()
			{}
		
		GetFriendsListRequest(const GetFriendsListRequest& src) :
			PlayFabBaseModel(),
			IncludeSteamFriends(src.IncludeSteamFriends)
			{}
			
		GetFriendsListRequest(const rapidjson::Value& obj) : GetFriendsListRequest()
        {
            readFromValue(obj);
        }
		
		~GetFriendsListRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetFriendsListResult : public PlayFabBaseModel
    {
		
		std::list<FriendInfo> Friends;
	
        GetFriendsListResult() :
			PlayFabBaseModel(),
			Friends()
			{}
		
		GetFriendsListResult(const GetFriendsListResult& src) :
			PlayFabBaseModel(),
			Friends(src.Friends)
			{}
			
		GetFriendsListResult(const rapidjson::Value& obj) : GetFriendsListResult()
        {
            readFromValue(obj);
        }
		
		~GetFriendsListResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleNewsRequest : public PlayFabBaseModel
    {
		
		OptionalUint32 Count;
	
        GetTitleNewsRequest() :
			PlayFabBaseModel(),
			Count()
			{}
		
		GetTitleNewsRequest(const GetTitleNewsRequest& src) :
			PlayFabBaseModel(),
			Count(src.Count)
			{}
			
		GetTitleNewsRequest(const rapidjson::Value& obj) : GetTitleNewsRequest()
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct TitleNewsItem : public PlayFabBaseModel
    {
		
		OptionalTime Timestamp;
		std::string Title;
		std::string Body;
	
        TitleNewsItem() :
			PlayFabBaseModel(),
			Timestamp(),
			Title(),
			Body()
			{}
		
		TitleNewsItem(const TitleNewsItem& src) :
			PlayFabBaseModel(),
			Timestamp(src.Timestamp),
			Title(src.Title),
			Body(src.Body)
			{}
			
		TitleNewsItem(const rapidjson::Value& obj) : TitleNewsItem()
        {
            readFromValue(obj);
        }
		
		~TitleNewsItem();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct GetTitleNewsResult : public PlayFabBaseModel
    {
		
		std::list<TitleNewsItem> News;
	
        GetTitleNewsResult() :
			PlayFabBaseModel(),
			News()
			{}
		
		GetTitleNewsResult(const GetTitleNewsResult& src) :
			PlayFabBaseModel(),
			News(src.News)
			{}
			
		GetTitleNewsResult(const rapidjson::Value& obj) : GetTitleNewsResult()
        {
            readFromValue(obj);
        }
		
		~GetTitleNewsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ItemPuchaseRequest : public PlayFabBaseModel
    {
		
		std::string ItemId;
		Uint32 Quantity;
		std::string Annotation;
		std::list<std::string> UpgradeFromItems;
	
        ItemPuchaseRequest() :
			PlayFabBaseModel(),
			ItemId(),
			Quantity(0),
			Annotation(),
			UpgradeFromItems()
			{}
		
		ItemPuchaseRequest(const ItemPuchaseRequest& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			Quantity(src.Quantity),
			Annotation(src.Annotation),
			UpgradeFromItems(src.UpgradeFromItems)
			{}
			
		ItemPuchaseRequest(const rapidjson::Value& obj) : ItemPuchaseRequest()
        {
            readFromValue(obj);
        }
		
		~ItemPuchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
		std::string AccessToken;
	
        LinkFacebookAccountRequest() :
			PlayFabBaseModel(),
			AccessToken()
			{}
		
		LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src) :
			PlayFabBaseModel(),
			AccessToken(src.AccessToken)
			{}
			
		LinkFacebookAccountRequest(const rapidjson::Value& obj) : LinkFacebookAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        LinkFacebookAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkFacebookAccountResult(const LinkFacebookAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkFacebookAccountResult(const rapidjson::Value& obj) : LinkFacebookAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
		std::string GameCenterId;
	
        LinkGameCenterAccountRequest() :
			PlayFabBaseModel(),
			GameCenterId()
			{}
		
		LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src) :
			PlayFabBaseModel(),
			GameCenterId(src.GameCenterId)
			{}
			
		LinkGameCenterAccountRequest(const rapidjson::Value& obj) : LinkGameCenterAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        LinkGameCenterAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkGameCenterAccountResult(const LinkGameCenterAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkGameCenterAccountResult(const rapidjson::Value& obj) : LinkGameCenterAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountRequest : public PlayFabBaseModel
    {
		
		std::string SteamTicket;
	
        LinkSteamAccountRequest() :
			PlayFabBaseModel(),
			SteamTicket()
			{}
		
		LinkSteamAccountRequest(const LinkSteamAccountRequest& src) :
			PlayFabBaseModel(),
			SteamTicket(src.SteamTicket)
			{}
			
		LinkSteamAccountRequest(const rapidjson::Value& obj) : LinkSteamAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        LinkSteamAccountResult() :
			PlayFabBaseModel()
			{}
		
		LinkSteamAccountResult(const LinkSteamAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		LinkSteamAccountResult(const rapidjson::Value& obj) : LinkSteamAccountResult()
        {
            readFromValue(obj);
        }
		
		~LinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventRequest : public PlayFabBaseModel
    {
		
		std::string eventName;
		std::map<std::string, MultitypeVar> Body;
	
        LogEventRequest() :
			PlayFabBaseModel(),
			eventName(),
			Body()
			{}
		
		LogEventRequest(const LogEventRequest& src) :
			PlayFabBaseModel(),
			eventName(src.eventName),
			Body(src.Body)
			{}
			
		LogEventRequest(const rapidjson::Value& obj) : LogEventRequest()
        {
            readFromValue(obj);
        }
		
		~LogEventRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LogEventResult : public PlayFabBaseModel
    {
		
		std::list<std::string> errors;
	
        LogEventResult() :
			PlayFabBaseModel(),
			errors()
			{}
		
		LogEventResult(const LogEventResult& src) :
			PlayFabBaseModel(),
			errors(src.errors)
			{}
			
		LogEventResult(const rapidjson::Value& obj) : LogEventResult()
        {
            readFromValue(obj);
        }
		
		~LogEventResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginResult : public PlayFabBaseModel
    {
		
		std::string SessionTicket;
	
        LoginResult() :
			PlayFabBaseModel(),
			SessionTicket()
			{}
		
		LoginResult(const LoginResult& src) :
			PlayFabBaseModel(),
			SessionTicket(src.SessionTicket)
			{}
			
		LoginResult(const rapidjson::Value& obj) : LoginResult()
        {
            readFromValue(obj);
        }
		
		~LoginResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithAndroidDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AndroidDeviceId;
		std::string OS;
		std::string AndroidDevice;
		bool CreateAccount;
	
        LoginWithAndroidDeviceIDRequest() :
			PlayFabBaseModel(),
			TitleId(),
			AndroidDeviceId(),
			OS(),
			AndroidDevice(),
			CreateAccount(false)
			{}
		
		LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			AndroidDeviceId(src.AndroidDeviceId),
			OS(src.OS),
			AndroidDevice(src.AndroidDevice),
			CreateAccount(src.CreateAccount)
			{}
			
		LoginWithAndroidDeviceIDRequest(const rapidjson::Value& obj) : LoginWithAndroidDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithAndroidDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithFacebookRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AccessToken;
		bool CreateAccount;
	
        LoginWithFacebookRequest() :
			PlayFabBaseModel(),
			TitleId(),
			AccessToken(),
			CreateAccount(false)
			{}
		
		LoginWithFacebookRequest(const LoginWithFacebookRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			AccessToken(src.AccessToken),
			CreateAccount(src.CreateAccount)
			{}
			
		LoginWithFacebookRequest(const rapidjson::Value& obj) : LoginWithFacebookRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithFacebookRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithGoogleAccountRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string AccessToken;
	
        LoginWithGoogleAccountRequest() :
			PlayFabBaseModel(),
			TitleId(),
			AccessToken()
			{}
		
		LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			AccessToken(src.AccessToken)
			{}
			
		LoginWithGoogleAccountRequest(const rapidjson::Value& obj) : LoginWithGoogleAccountRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithGoogleAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithIOSDeviceIDRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string DeviceId;
		std::string OS;
		std::string DeviceModel;
		bool CreateAccount;
	
        LoginWithIOSDeviceIDRequest() :
			PlayFabBaseModel(),
			TitleId(),
			DeviceId(),
			OS(),
			DeviceModel(),
			CreateAccount(false)
			{}
		
		LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			DeviceId(src.DeviceId),
			OS(src.OS),
			DeviceModel(src.DeviceModel),
			CreateAccount(src.CreateAccount)
			{}
			
		LoginWithIOSDeviceIDRequest(const rapidjson::Value& obj) : LoginWithIOSDeviceIDRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithIOSDeviceIDRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithPlayFabRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Username;
		std::string Password;
	
        LoginWithPlayFabRequest() :
			PlayFabBaseModel(),
			TitleId(),
			Username(),
			Password()
			{}
		
		LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			Username(src.Username),
			Password(src.Password)
			{}
			
		LoginWithPlayFabRequest(const rapidjson::Value& obj) : LoginWithPlayFabRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithPlayFabRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct LoginWithSteamRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string SteamTicket;
		bool CreateAccount;
	
        LoginWithSteamRequest() :
			PlayFabBaseModel(),
			TitleId(),
			SteamTicket(),
			CreateAccount(false)
			{}
		
		LoginWithSteamRequest(const LoginWithSteamRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			SteamTicket(src.SteamTicket),
			CreateAccount(src.CreateAccount)
			{}
			
		LoginWithSteamRequest(const rapidjson::Value& obj) : LoginWithSteamRequest()
        {
            readFromValue(obj);
        }
		
		~LoginWithSteamRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct MatchmakeRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Boxed<Region> Region;
		std::string GameMode;
		std::string LobbyId;
		OptionalBool EnableQueue;
	
        MatchmakeRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			Region(),
			GameMode(),
			LobbyId(),
			EnableQueue()
			{}
		
		MatchmakeRequest(const MatchmakeRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			GameMode(src.GameMode),
			LobbyId(src.LobbyId),
			EnableQueue(src.EnableQueue)
			{}
			
		MatchmakeRequest(const rapidjson::Value& obj) : MatchmakeRequest()
        {
            readFromValue(obj);
        }
		
		~MatchmakeRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum MatchmakeStatus
	{
		MatchmakeStatusComplete,
		MatchmakeStatusWaiting,
		MatchmakeStatusGameNotFound
	};
	
	void writeMatchmakeStatusEnumJSON(MatchmakeStatus enumVal, PFStringJsonWriter& writer);
	MatchmakeStatus readMatchmakeStatusFromValue(const rapidjson::Value& obj);
	
	
	struct MatchmakeResult : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		std::string ServerHostname;
		OptionalUint32 ServerPort;
		OptionalUint32 WebSocketPort;
		std::string Ticket;
		std::string Expires;
		OptionalUint32 PollWaitTimeMS;
		Boxed<MatchmakeStatus> Status;
		std::list<std::string> Queue;
	
        MatchmakeResult() :
			PlayFabBaseModel(),
			LobbyID(),
			ServerHostname(),
			ServerPort(),
			WebSocketPort(),
			Ticket(),
			Expires(),
			PollWaitTimeMS(),
			Status(),
			Queue()
			{}
		
		MatchmakeResult(const MatchmakeResult& src) :
			PlayFabBaseModel(),
			LobbyID(src.LobbyID),
			ServerHostname(src.ServerHostname),
			ServerPort(src.ServerPort),
			WebSocketPort(src.WebSocketPort),
			Ticket(src.Ticket),
			Expires(src.Expires),
			PollWaitTimeMS(src.PollWaitTimeMS),
			Status(src.Status),
			Queue(src.Queue)
			{}
			
		MatchmakeResult(const rapidjson::Value& obj) : MatchmakeResult()
        {
            readFromValue(obj);
        }
		
		~MatchmakeResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PayForPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::string ProviderName;
		std::string Currency;
	
        PayForPurchaseRequest() :
			PlayFabBaseModel(),
			OrderId(),
			ProviderName(),
			Currency()
			{}
		
		PayForPurchaseRequest(const PayForPurchaseRequest& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			ProviderName(src.ProviderName),
			Currency(src.Currency)
			{}
			
		PayForPurchaseRequest(const rapidjson::Value& obj) : PayForPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~PayForPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	enum TransactionStatus
	{
		TransactionStatusCreateCart,
		TransactionStatusInit,
		TransactionStatusApproved,
		TransactionStatusSucceeded,
		TransactionStatusFailedByProvider,
		TransactionStatusRefundPending,
		TransactionStatusRefunded,
		TransactionStatusRefundFailed,
		TransactionStatusChargedBack,
		TransactionStatusFailedByUber,
		TransactionStatusRevoked,
		TransactionStatusTradePending,
		TransactionStatusUpgraded,
		TransactionStatusOther,
		TransactionStatusFailed
	};
	
	void writeTransactionStatusEnumJSON(TransactionStatus enumVal, PFStringJsonWriter& writer);
	TransactionStatus readTransactionStatusFromValue(const rapidjson::Value& obj);
	
	
	struct PayForPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		Boxed<TransactionStatus> Status;
		std::map<std::string, Int32> VCAmount;
		std::string PurchaseCurrency;
		Uint32 PurchasePrice;
		Uint32 CreditApplied;
		std::string ProviderData;
		std::string PurchaseConfirmationPageURL;
		std::map<std::string, Int32> VirtualCurrency;
	
        PayForPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			Status(),
			VCAmount(),
			PurchaseCurrency(),
			PurchasePrice(0),
			CreditApplied(0),
			ProviderData(),
			PurchaseConfirmationPageURL(),
			VirtualCurrency()
			{}
		
		PayForPurchaseResult(const PayForPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			Status(src.Status),
			VCAmount(src.VCAmount),
			PurchaseCurrency(src.PurchaseCurrency),
			PurchasePrice(src.PurchasePrice),
			CreditApplied(src.CreditApplied),
			ProviderData(src.ProviderData),
			PurchaseConfirmationPageURL(src.PurchaseConfirmationPageURL),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		PayForPurchaseResult(const rapidjson::Value& obj) : PayForPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~PayForPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PaymentOption : public PlayFabBaseModel
    {
		
		std::string Currency;
		std::string ProviderName;
		Uint32 Price;
		Uint32 StoreCredit;
	
        PaymentOption() :
			PlayFabBaseModel(),
			Currency(),
			ProviderName(),
			Price(0),
			StoreCredit(0)
			{}
		
		PaymentOption(const PaymentOption& src) :
			PlayFabBaseModel(),
			Currency(src.Currency),
			ProviderName(src.ProviderName),
			Price(src.Price),
			StoreCredit(src.StoreCredit)
			{}
			
		PaymentOption(const rapidjson::Value& obj) : PaymentOption()
        {
            readFromValue(obj);
        }
		
		~PaymentOption();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PlaylistInfo : public PlayFabBaseModel
    {
		
		std::string PlaylistId;
		Uint32 GameCount;
		Uint32 GamePlayersCount;
	
        PlaylistInfo() :
			PlayFabBaseModel(),
			PlaylistId(),
			GameCount(0),
			GamePlayersCount(0)
			{}
		
		PlaylistInfo(const PlaylistInfo& src) :
			PlayFabBaseModel(),
			PlaylistId(src.PlaylistId),
			GameCount(src.GameCount),
			GamePlayersCount(src.GamePlayersCount)
			{}
			
		PlaylistInfo(const rapidjson::Value& obj) : PlaylistInfo()
        {
            readFromValue(obj);
        }
		
		~PlaylistInfo();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchaseItemRequest : public PlayFabBaseModel
    {
		
		std::string ItemId;
		std::string VirtualCurrency;
		Int32 Price;
		std::string CatalogVersion;
	
        PurchaseItemRequest() :
			PlayFabBaseModel(),
			ItemId(),
			VirtualCurrency(),
			Price(0),
			CatalogVersion()
			{}
		
		PurchaseItemRequest(const PurchaseItemRequest& src) :
			PlayFabBaseModel(),
			ItemId(src.ItemId),
			VirtualCurrency(src.VirtualCurrency),
			Price(src.Price),
			CatalogVersion(src.CatalogVersion)
			{}
			
		PurchaseItemRequest(const rapidjson::Value& obj) : PurchaseItemRequest()
        {
            readFromValue(obj);
        }
		
		~PurchaseItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct PurchaseItemResult : public PlayFabBaseModel
    {
		
		std::list<PurchasedItem> Items;
	
        PurchaseItemResult() :
			PlayFabBaseModel(),
			Items()
			{}
		
		PurchaseItemResult(const PurchaseItemResult& src) :
			PlayFabBaseModel(),
			Items(src.Items)
			{}
			
		PurchaseItemResult(const rapidjson::Value& obj) : PurchaseItemResult()
        {
            readFromValue(obj);
        }
		
		~PurchaseItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemCouponRequest : public PlayFabBaseModel
    {
		
		std::string CouponCode;
		std::string CatalogVersion;
	
        RedeemCouponRequest() :
			PlayFabBaseModel(),
			CouponCode(),
			CatalogVersion()
			{}
		
		RedeemCouponRequest(const RedeemCouponRequest& src) :
			PlayFabBaseModel(),
			CouponCode(src.CouponCode),
			CatalogVersion(src.CatalogVersion)
			{}
			
		RedeemCouponRequest(const rapidjson::Value& obj) : RedeemCouponRequest()
        {
            readFromValue(obj);
        }
		
		~RedeemCouponRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RedeemCouponResult : public PlayFabBaseModel
    {
		
		std::list<ItemInstance> GrantedItems;
	
        RedeemCouponResult() :
			PlayFabBaseModel(),
			GrantedItems()
			{}
		
		RedeemCouponResult(const RedeemCouponResult& src) :
			PlayFabBaseModel(),
			GrantedItems(src.GrantedItems)
			{}
			
		RedeemCouponResult(const rapidjson::Value& obj) : RedeemCouponResult()
        {
            readFromValue(obj);
        }
		
		~RedeemCouponResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionPlaylistsRequest : public PlayFabBaseModel
    {
		
		std::string BuildVersion;
		Region Region;
		std::string TitleId;
	
        RegionPlaylistsRequest() :
			PlayFabBaseModel(),
			BuildVersion(),
			Region(),
			TitleId()
			{}
		
		RegionPlaylistsRequest(const RegionPlaylistsRequest& src) :
			PlayFabBaseModel(),
			BuildVersion(src.BuildVersion),
			Region(src.Region),
			TitleId(src.TitleId)
			{}
			
		RegionPlaylistsRequest(const rapidjson::Value& obj) : RegionPlaylistsRequest()
        {
            readFromValue(obj);
        }
		
		~RegionPlaylistsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegionPlaylistsResult : public PlayFabBaseModel
    {
		
		std::list<PlaylistInfo> Playlists;
	
        RegionPlaylistsResult() :
			PlayFabBaseModel(),
			Playlists()
			{}
		
		RegionPlaylistsResult(const RegionPlaylistsResult& src) :
			PlayFabBaseModel(),
			Playlists(src.Playlists)
			{}
			
		RegionPlaylistsResult(const rapidjson::Value& obj) : RegionPlaylistsResult()
        {
            readFromValue(obj);
        }
		
		~RegionPlaylistsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationRequest : public PlayFabBaseModel
    {
		
		std::string DeviceToken;
	
        RegisterForIOSPushNotificationRequest() :
			PlayFabBaseModel(),
			DeviceToken()
			{}
		
		RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src) :
			PlayFabBaseModel(),
			DeviceToken(src.DeviceToken)
			{}
			
		RegisterForIOSPushNotificationRequest(const rapidjson::Value& obj) : RegisterForIOSPushNotificationRequest()
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterForIOSPushNotificationResult : public PlayFabBaseModel
    {
		
	
        RegisterForIOSPushNotificationResult() :
			PlayFabBaseModel()
			{}
		
		RegisterForIOSPushNotificationResult(const RegisterForIOSPushNotificationResult& src) :
			PlayFabBaseModel()
			{}
			
		RegisterForIOSPushNotificationResult(const rapidjson::Value& obj) : RegisterForIOSPushNotificationResult()
        {
            readFromValue(obj);
        }
		
		~RegisterForIOSPushNotificationResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterPlayFabUserRequest : public PlayFabBaseModel
    {
		
		std::string TitleId;
		std::string Username;
		std::string Email;
		std::string Password;
		std::string Origination;
	
        RegisterPlayFabUserRequest() :
			PlayFabBaseModel(),
			TitleId(),
			Username(),
			Email(),
			Password(),
			Origination()
			{}
		
		RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src) :
			PlayFabBaseModel(),
			TitleId(src.TitleId),
			Username(src.Username),
			Email(src.Email),
			Password(src.Password),
			Origination(src.Origination)
			{}
			
		RegisterPlayFabUserRequest(const rapidjson::Value& obj) : RegisterPlayFabUserRequest()
        {
            readFromValue(obj);
        }
		
		~RegisterPlayFabUserRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RegisterPlayFabUserResult : public PlayFabBaseModel
    {
		
		std::string PlayFabId;
		std::string SessionTicket;
		std::string Username;
	
        RegisterPlayFabUserResult() :
			PlayFabBaseModel(),
			PlayFabId(),
			SessionTicket(),
			Username()
			{}
		
		RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src) :
			PlayFabBaseModel(),
			PlayFabId(src.PlayFabId),
			SessionTicket(src.SessionTicket),
			Username(src.Username)
			{}
			
		RegisterPlayFabUserResult(const rapidjson::Value& obj) : RegisterPlayFabUserResult()
        {
            readFromValue(obj);
        }
		
		~RegisterPlayFabUserResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveFriendRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
	
        RemoveFriendRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId()
			{}
		
		RemoveFriendRequest(const RemoveFriendRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId)
			{}
			
		RemoveFriendRequest(const rapidjson::Value& obj) : RemoveFriendRequest()
        {
            readFromValue(obj);
        }
		
		~RemoveFriendRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct RemoveFriendResult : public PlayFabBaseModel
    {
		
	
        RemoveFriendResult() :
			PlayFabBaseModel()
			{}
		
		RemoveFriendResult(const RemoveFriendResult& src) :
			PlayFabBaseModel()
			{}
			
		RemoveFriendResult(const rapidjson::Value& obj) : RemoveFriendResult()
        {
            readFromValue(obj);
        }
		
		~RemoveFriendResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetFriendTagsRequest : public PlayFabBaseModel
    {
		
		std::string FriendPlayFabId;
		std::list<std::string> Tags;
	
        SetFriendTagsRequest() :
			PlayFabBaseModel(),
			FriendPlayFabId(),
			Tags()
			{}
		
		SetFriendTagsRequest(const SetFriendTagsRequest& src) :
			PlayFabBaseModel(),
			FriendPlayFabId(src.FriendPlayFabId),
			Tags(src.Tags)
			{}
			
		SetFriendTagsRequest(const rapidjson::Value& obj) : SetFriendTagsRequest()
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct SetFriendTagsResult : public PlayFabBaseModel
    {
		
	
        SetFriendTagsResult() :
			PlayFabBaseModel()
			{}
		
		SetFriendTagsResult(const SetFriendTagsResult& src) :
			PlayFabBaseModel()
			{}
			
		SetFriendTagsResult(const rapidjson::Value& obj) : SetFriendTagsResult()
        {
            readFromValue(obj);
        }
		
		~SetFriendTagsResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartGameResult : public PlayFabBaseModel
    {
		
		std::string LobbyID;
		std::string ServerHostname;
		OptionalUint32 ServerPort;
		std::string Ticket;
		std::string Expires;
		std::string Password;
	
        StartGameResult() :
			PlayFabBaseModel(),
			LobbyID(),
			ServerHostname(),
			ServerPort(),
			Ticket(),
			Expires(),
			Password()
			{}
		
		StartGameResult(const StartGameResult& src) :
			PlayFabBaseModel(),
			LobbyID(src.LobbyID),
			ServerHostname(src.ServerHostname),
			ServerPort(src.ServerPort),
			Ticket(src.Ticket),
			Expires(src.Expires),
			Password(src.Password)
			{}
			
		StartGameResult(const rapidjson::Value& obj) : StartGameResult()
        {
            readFromValue(obj);
        }
		
		~StartGameResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string CatalogVersion;
		std::list<ItemPuchaseRequest> Items;
	
        StartPurchaseRequest() :
			PlayFabBaseModel(),
			CatalogVersion(),
			Items()
			{}
		
		StartPurchaseRequest(const StartPurchaseRequest& src) :
			PlayFabBaseModel(),
			CatalogVersion(src.CatalogVersion),
			Items(src.Items)
			{}
			
		StartPurchaseRequest(const rapidjson::Value& obj) : StartPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~StartPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct StartPurchaseResult : public PlayFabBaseModel
    {
		
		std::string OrderId;
		std::list<CartItem> Contents;
		std::list<PaymentOption> PaymentOptions;
		std::map<std::string, Int32> VirtualCurrencyBalances;
	
        StartPurchaseResult() :
			PlayFabBaseModel(),
			OrderId(),
			Contents(),
			PaymentOptions(),
			VirtualCurrencyBalances()
			{}
		
		StartPurchaseResult(const StartPurchaseResult& src) :
			PlayFabBaseModel(),
			OrderId(src.OrderId),
			Contents(src.Contents),
			PaymentOptions(src.PaymentOptions),
			VirtualCurrencyBalances(src.VirtualCurrencyBalances)
			{}
			
		StartPurchaseResult(const rapidjson::Value& obj) : StartPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~StartPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkFacebookAccountRequest(const rapidjson::Value& obj) : UnlinkFacebookAccountRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkFacebookAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkFacebookAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkFacebookAccountResult(const UnlinkFacebookAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkFacebookAccountResult(const rapidjson::Value& obj) : UnlinkFacebookAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkFacebookAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountRequest : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountRequest() :
			PlayFabBaseModel()
			{}
		
		UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkGameCenterAccountRequest(const rapidjson::Value& obj) : UnlinkGameCenterAccountRequest()
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkGameCenterAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkGameCenterAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkGameCenterAccountResult(const UnlinkGameCenterAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkGameCenterAccountResult(const rapidjson::Value& obj) : UnlinkGameCenterAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkGameCenterAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlinkSteamAccountResult : public PlayFabBaseModel
    {
		
	
        UnlinkSteamAccountResult() :
			PlayFabBaseModel()
			{}
		
		UnlinkSteamAccountResult(const UnlinkSteamAccountResult& src) :
			PlayFabBaseModel()
			{}
			
		UnlinkSteamAccountResult(const rapidjson::Value& obj) : UnlinkSteamAccountResult()
        {
            readFromValue(obj);
        }
		
		~UnlinkSteamAccountResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemRequest : public PlayFabBaseModel
    {
		
		std::string ContainerItemId;
		std::string CatalogVersion;
	
        UnlockContainerItemRequest() :
			PlayFabBaseModel(),
			ContainerItemId(),
			CatalogVersion()
			{}
		
		UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
			PlayFabBaseModel(),
			ContainerItemId(src.ContainerItemId),
			CatalogVersion(src.CatalogVersion)
			{}
			
		UnlockContainerItemRequest(const rapidjson::Value& obj) : UnlockContainerItemRequest()
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UnlockContainerItemResult : public PlayFabBaseModel
    {
		
		std::string UnlockedItemInstanceId;
		std::string UnlockedWithItemInstanceId;
		std::list<ItemInstance> GrantedItems;
		std::map<std::string, Uint32> VirtualCurrency;
	
        UnlockContainerItemResult() :
			PlayFabBaseModel(),
			UnlockedItemInstanceId(),
			UnlockedWithItemInstanceId(),
			GrantedItems(),
			VirtualCurrency()
			{}
		
		UnlockContainerItemResult(const UnlockContainerItemResult& src) :
			PlayFabBaseModel(),
			UnlockedItemInstanceId(src.UnlockedItemInstanceId),
			UnlockedWithItemInstanceId(src.UnlockedWithItemInstanceId),
			GrantedItems(src.GrantedItems),
			VirtualCurrency(src.VirtualCurrency)
			{}
			
		UnlockContainerItemResult(const rapidjson::Value& obj) : UnlockContainerItemResult()
        {
            readFromValue(obj);
        }
		
		~UnlockContainerItemResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateEmailAddressRequest : public PlayFabBaseModel
    {
		
		std::string Email;
	
        UpdateEmailAddressRequest() :
			PlayFabBaseModel(),
			Email()
			{}
		
		UpdateEmailAddressRequest(const UpdateEmailAddressRequest& src) :
			PlayFabBaseModel(),
			Email(src.Email)
			{}
			
		UpdateEmailAddressRequest(const rapidjson::Value& obj) : UpdateEmailAddressRequest()
        {
            readFromValue(obj);
        }
		
		~UpdateEmailAddressRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdateEmailAddressResult : public PlayFabBaseModel
    {
		
	
        UpdateEmailAddressResult() :
			PlayFabBaseModel()
			{}
		
		UpdateEmailAddressResult(const UpdateEmailAddressResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdateEmailAddressResult(const rapidjson::Value& obj) : UpdateEmailAddressResult()
        {
            readFromValue(obj);
        }
		
		~UpdateEmailAddressResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdatePasswordRequest : public PlayFabBaseModel
    {
		
		std::string Password;
	
        UpdatePasswordRequest() :
			PlayFabBaseModel(),
			Password()
			{}
		
		UpdatePasswordRequest(const UpdatePasswordRequest& src) :
			PlayFabBaseModel(),
			Password(src.Password)
			{}
			
		UpdatePasswordRequest(const rapidjson::Value& obj) : UpdatePasswordRequest()
        {
            readFromValue(obj);
        }
		
		~UpdatePasswordRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct UpdatePasswordResult : public PlayFabBaseModel
    {
		
	
        UpdatePasswordResult() :
			PlayFabBaseModel()
			{}
		
		UpdatePasswordResult(const UpdatePasswordResult& src) :
			PlayFabBaseModel()
			{}
			
		UpdatePasswordResult(const rapidjson::Value& obj) : UpdatePasswordResult()
        {
            readFromValue(obj);
        }
		
		~UpdatePasswordResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateGooglePlayPurchaseRequest : public PlayFabBaseModel
    {
		
		std::string packageName;
		std::string productId;
		std::string purchaseToken;
		std::string accessToken;
	
        ValidateGooglePlayPurchaseRequest() :
			PlayFabBaseModel(),
			packageName(),
			productId(),
			purchaseToken(),
			accessToken()
			{}
		
		ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src) :
			PlayFabBaseModel(),
			packageName(src.packageName),
			productId(src.productId),
			purchaseToken(src.purchaseToken),
			accessToken(src.accessToken)
			{}
			
		ValidateGooglePlayPurchaseRequest(const rapidjson::Value& obj) : ValidateGooglePlayPurchaseRequest()
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateGooglePlayPurchaseResult : public PlayFabBaseModel
    {
		
		std::string kind;
		OptionalTime purchaseTime;
		Int32 puchaseState;
		Int32 consumptionState;
		std::string developerPayload;
	
        ValidateGooglePlayPurchaseResult() :
			PlayFabBaseModel(),
			kind(),
			purchaseTime(),
			puchaseState(0),
			consumptionState(0),
			developerPayload()
			{}
		
		ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src) :
			PlayFabBaseModel(),
			kind(src.kind),
			purchaseTime(src.purchaseTime),
			puchaseState(src.puchaseState),
			consumptionState(src.consumptionState),
			developerPayload(src.developerPayload)
			{}
			
		ValidateGooglePlayPurchaseResult(const rapidjson::Value& obj) : ValidateGooglePlayPurchaseResult()
        {
            readFromValue(obj);
        }
		
		~ValidateGooglePlayPurchaseResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptRequest : public PlayFabBaseModel
    {
		
		std::string ReceiptData;
		std::string ObjectName;
		std::string CurrencyCode;
		Uint32 PurchasePrice;
	
        ValidateIOSReceiptRequest() :
			PlayFabBaseModel(),
			ReceiptData(),
			ObjectName(),
			CurrencyCode(),
			PurchasePrice(0)
			{}
		
		ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src) :
			PlayFabBaseModel(),
			ReceiptData(src.ReceiptData),
			ObjectName(src.ObjectName),
			CurrencyCode(src.CurrencyCode),
			PurchasePrice(src.PurchasePrice)
			{}
			
		ValidateIOSReceiptRequest(const rapidjson::Value& obj) : ValidateIOSReceiptRequest()
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptRequest();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	struct ValidateIOSReceiptResult : public PlayFabBaseModel
    {
		
	
        ValidateIOSReceiptResult() :
			PlayFabBaseModel()
			{}
		
		ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src) :
			PlayFabBaseModel()
			{}
			
		ValidateIOSReceiptResult(const rapidjson::Value& obj) : ValidateIOSReceiptResult()
        {
            readFromValue(obj);
        }
		
		~ValidateIOSReceiptResult();
		
        void writeJSON(PFStringJsonWriter& writer);
        bool readFromValue(const rapidjson::Value& obj);
    };
	
	
}

#endif