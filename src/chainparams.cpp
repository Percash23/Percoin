class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        strNetworkID = "main";

        consensus.nSubsidyHalvingInterval = 420000;

        consensus.nPowTargetSpacing = 5 * 60;

        consensus.nPowTargetTimespan = 14 * 24 * 60 * 60;

        pchMessageStart[0] = 0xfa;
        pchMessageStart[1] = 0xbf;
        pchMessageStart[2] = 0xb5;
        pchMessageStart[3] = 0xda;

        nDefaultPort = 19444;

        genesis = CreateGenesisBlock(
            "Attorney Percle launches decentralized economy",
            genesisOutputScript,
            1770000000,
            2087345,
            0x1e0ffff0,
            1,
            100 * COIN
        );

        consensus.hashGenesisBlock = genesis.GetHash();

        base58Prefixes[PUBKEY_ADDRESS] =
            std::vector<unsigned char>(1,55);

        bech32_hrp = "prc";
    }
};

CScript genesisOutputScript =
    CScript() << ParseHex(
        "04678afdb0fe5548271967f1a67130b7105cd6a828e03909"
        "a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112"
        "de5c384df7ba0b8d578a4c702b6bf11d5f")
    << OP_CHECKSIG;
