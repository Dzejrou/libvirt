/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef LIBVIRT_VIRHASHDATA_H
# define LIBVIRT_VIRHASHDATA_H

const char *uuids[] = {
/* [  2] */ "a9b02f96-e430-4f7c-a7ff-a647d080447a",
/* [  4] */ "202e32ca-f82c-4f13-9266-28dc8d002074",
/* [  5] */ "e0233ed8-22da-4a1e-a1a2-2d0343635173",
            "4ce4f92a-e116-4c38-81ca-acebbdcab410",
/* [  6] */ "4121c24d-bfc3-45f9-85c6-899679b5cc60",
            "e641740a-85dd-4414-bdbf-37dbaee39e26",
/* [  9] */ "a0c94fa8-7d41-4100-8907-9b9209e7954a",
/* [ 10] */ "d3c7d973-046d-4c49-90bb-7a353aaea8a2",
            "ad15e406-8258-49ad-a47e-cbb955b34220",
/* [ 11] */ "0979803b-6bcc-4305-917c-079dcc0f1cb4",
/* [ 12] */ "0311fc3f-e5b1-48f5-ab9e-e577fbfc6b82",
/* [ 14] */ "512aa755-3c48-456b-9545-3cc6f729444f",
/* [ 16] */ "43b7e89e-c5cb-44c6-9bdb-7f070d6e5cf7",
/* [ 17] */ "3e4fd85d-57d8-4d1d-867e-71ba3b898dc3",
/* [ 18] */ "8433c800-1cda-4bf1-8a3d-879f657e0068",
/* [ 20] */ "fb55ed30-a8fe-44ab-aa25-4d609c487975",
/* [ 21] */ "b7fa38f1-f329-430d-8450-57d75175f578",
/* [ 22] */ "bbbff7ba-73d8-42a0-ace3-dbf39906223a",
/* [ 23] */ "1ef274ef-2c99-488f-ba25-21da0285d7fe",
/* [ 26] */ "24e30027-16cf-4848-a4be-6dffae973757",
/* [ 28] */ "fd056c9c-9f39-43b8-90be-aaff3909a56c",
/* [ 29] */ "2c53a1dc-3b62-4369-a583-71cad3d1fa98",
            "063b19c7-1c96-4cc8-ac18-bc007f073a13",
/* [ 32] */ "f210da80-6e0a-4185-a96e-7bd32a779e72",
/* [ 33] */ "dd557d13-0f6d-460a-8002-9392ce483e50",
/* [ 34] */ "d16f07e4-f5be-4744-b70a-dc6e26666c44",
/* [ 35] */ "dafe133f-d48c-4a30-b156-f073725401f5",
/* [ 36] */ "96dfe074-7236-4898-aad2-81963c23adda",
            "c971ea2e-9410-4b3c-9027-d678a0d9db8d",
/* [ 38] */ "7b417156-b90a-4450-9c77-e1e94e1c980c",
/* [ 39] */ "a7334316-6572-47d5-9330-9a3e70c30c6d",
/* [ 40] */ "1e33c931-ef3a-497f-9374-6d9dddf04893",
            "ebc4d160-4418-41cd-bd2f-0ef2741ffafb",
/* [ 41] */ "6e13dd0b-67f8-447c-8445-9b8476a2e556",
/* [ 42] */ "6123a5df-4b0b-421e-8dcb-4ecb3b33113d",
/* [ 44] */ "75fc3921-558b-4093-82ba-e9807551de84",
/* [ 45] */ "3308bc39-5d59-4ae8-8e45-bc1607a5d5d3",
            "ad064af6-e55a-4de9-95b8-6a0afc77ad81",
/* [ 46] */ "f17494ba-2353-4af0-b1ba-13680858edcc",
            "64ab4e78-1b6e-4b88-b47f-2def46c79a86",
            "f99b0d59-ecff-4cc6-a9d3-20159536edc8",
/* [ 48] */ "a697613f-349b-41f8-80c5-f416ee462ca2",
/* [ 52] */ "e9af1e6f-016d-43f3-8890-a33d924b4368",
            "4e5c715a-4f37-4260-ae33-a86bc97f2a69",
/* [ 54] */ "ae82cd8a-d67a-4fc7-9323-06511cbe9f4d",
            "32d7a14c-4138-459e-aa19-5263d4a6b410",
/* [ 56] */ "9aba27ea-37e4-485c-983c-42de92c2d2ea",
/* [ 59] */ "45826b95-3120-417b-a5ff-5480e342f25e",
            "834a24b7-5c77-4287-9266-82c2f2c9e9fc",
/* [ 62] */ "d4d09671-8132-4809-badf-efbef39c9dac",
/* [ 66] */ "b0bd3bd8-1271-4755-84e7-e89fabb929b2",
/* [ 69] */ "86e2a115-3e5b-480e-9109-12ac4b525761",
/* [ 70] */ "2896d83a-ede2-4a01-8047-25a0db868b27",
/* [ 71] */ "1f290a52-51ad-4ea6-ae11-b90c50ba8ea6",
/* [ 72] */ "511b890f-d9f5-4fb4-90d4-39e93719c4bf",
/* [ 74] */ "51bf1c00-6c0a-4ca4-8acc-1ab9c6bc44ce",
/* [ 75] */ "e1bfa30f-bc0b-4a24-99ae-bed7f3f21a7b",
            "acda5fa0-58de-4e1e-aa65-2124d1e29c54",
/* [ 76] */ "5f476c28-8f26-48e0-98de-85745fe2f304",
/* [ 79] */ "4a1f1b60-4c53-4525-b687-f0175b6e19bc",
/* [ 80] */ "608bcc5e-5ccc-4967-a58f-4d61665685bc",
            "b7028f70-6d4d-4d0a-8c78-ec61fd6e38fc",
/* [ 81] */ "03cc8179-3b0e-4c9f-a665-9ca416ee0e9b",
/* [ 83] */ "2f32ba02-7a07-46e0-b859-a7b82a5de8e0",
/* [ 85] */ "490b8a1b-4d7a-4d14-81c3-af6c4824632f",
/* [ 88] */ "48e8c968-c1b7-4b3b-a24a-abb94604758b",
/* [ 89] */ "242fd86e-d804-4b7e-9a92-b8227becdb91",
/* [ 90] */ "13315204-76aa-4ae6-9f27-44434facea60",
/* [ 91] */ "548544c8-1737-4efe-8661-4783e4b6ef12",
/* [ 92] */ "3e6f26ce-ddb3-485c-86ca-b455fcfb802a",
/* [ 93] */ "a6b1df31-2f3f-4314-87f9-fd794aad8d5a",
            "bce3d144-820d-489b-8506-f04fdea2ee48",
/* [ 95] */ "e400060d-4de7-4c12-9533-a9aa4296c44c",
/* [ 96] */ "9a0a6b84-7263-46d3-a45e-ad9e7b61a109",
            "a9734665-e800-4c99-96ec-dd0426e20b00",
/* [ 97] */ "d3efc444-1758-4733-9cfb-50412ba7cf79",
            "999edbf0-b194-43aa-87ed-afc2ae0fe30b",
/* [ 98] */ "e866d6bf-2e7c-4f97-8178-1ca758020d2c",
/* [ 99] */ "87b97bc3-62d1-465d-94a8-7ae22efd8103",
/* [100] */ "050d33f5-e7b1-42e8-a253-292b2769069a",
            "1b5fff42-37dc-4770-9a41-6df2fe4b7858",
            "d6a4b1a3-6c19-46e1-90b9-2de3ef471eb3",
/* [101] */ "51e8e981-dd6a-4e85-a6b4-ed60d38a72ac",
/* [102] */ "7f62af6b-3954-4a7a-9b32-721d770da3d8",
            "8016379a-9905-43cb-a6bd-98fc83296982",
            "e003782c-fcec-449a-a0e4-cda41893e78f",
/* [103] */ "954d5d6a-98b6-45ad-a95c-85721664b1ea",
/* [105] */ "ccd3680a-d8ac-4f68-ac08-a7b59f31af10",
/* [106] */ "cded8a5d-874c-4400-86a4-eb483cfe0265",
/* [109] */ "356df5ef-c744-4696-a697-91f4634c8559",
/* [110] */ "faee6c44-f212-4c8a-8e8c-bea91fb26532",
/* [113] */ "84377685-45f9-4c89-ad4f-5776f6ffcff4",
/* [116] */ "b69c50ec-2bd3-4162-bca3-eec4398f2d12",
            "fb5e4a60-efdb-4884-bb9e-ac911b1b5100",
            "d59a5c99-5ce5-46bf-8a80-cdf916f71576",
/* [117] */ "c09322ef-0b70-4ea0-922b-95832bb5469c",
/* [118] */ "47e88680-4f46-4096-9f77-1bd4e271acd5",
/* [119] */ "570d5f36-31e6-412b-84dd-e5aabb73dd5b",
            "56cf0509-741a-4a5c-a82c-51060f009b9a",
/* [122] */ "c257b495-e53c-4be5-8b05-491057531120",
            "654139f2-cef5-48df-a6b2-6ca6e9abb1de",
/* [123] */ "8be1d21c-cd35-4c7c-8fee-4b5046c7a62b",
            "830f0d57-9f21-40e8-bb86-cbf41de23fd6",
            "57044958-1b8a-4c02-ab75-2298c6e44263",
            "d526cd6c-4a99-4d5f-abfb-fc9419edd9d0",
/* [124] */ "36492c15-ce5a-4f9b-b75a-97937981f9b4",
            "66a984a9-cd04-4683-b241-2b296da662bc",
            "0b3404eb-022b-4ef1-a78d-a2b12230b258",
/* [125] */ "f8d7efcf-1138-422b-a844-feffa7478be8",
/* [130] */ "4f8ca175-6efa-476e-ab58-11efe9211415",
/* [131] */ "87fcc2e2-0b65-4eaa-8bea-74de85abf3fe",
            "ea0d108f-8a39-414a-88c6-fcabce029af7",
            "b1f17225-efb3-4b8a-aae3-a2ca53eeb99e",
            "45dcb41d-0628-485f-9f14-3296410555a5",
/* [133] */ "a2b16b3f-93df-4d5a-a226-5f340bf2b0a3",
/* [140] */ "373025da-238a-467f-8164-b5675cfe6422",
/* [141] */ "8969aa50-6d2b-4659-ade1-b4a2169e0ed1",
/* [142] */ "ba092226-be95-4ec2-8c35-215db61448e6",
/* [143] */ "4213fb5a-6d28-4296-85a6-bb149a0468b7",
/* [144] */ "05bd2d12-1062-46c3-9ac2-362617175b04",
/* [145] */ "97cff77b-9f8d-40e9-8c41-601dc280a413",
            "4d05b973-b30b-4416-bdd8-e3773b30cb6e",
            "95382996-dfce-483d-8ff8-1d05c6c65bb5",
/* [146] */ "04213584-d98a-4e82-a884-1238a7568c48",
/* [148] */ "68bad966-22ec-4e87-9c6c-c1dd000959c4",
            "f1b44f04-2028-4855-ad6c-9538ef6e44a2",
/* [149] */ "8748c9ae-624d-4fb1-a3d3-5073716c882c",
/* [150] */ "e0eb4d5b-d251-41c9-9215-0e2830413fe4",
            "426795e5-a6e2-4b42-a81d-41cddb79f9b6",
            "a16297c6-e9f4-49c4-b244-4e2ae2803ce3",
/* [151] */ "ea07d3ec-4f35-41db-afd2-4bc2b3273e0f",
            "f013f77d-8bd8-4a8e-82e9-82512071ac0f",
/* [152] */ "754038bd-c382-4605-b53d-600f165aac10",
/* [156] */ "06575e79-74dd-46c1-a752-de53b8bf8987",
/* [158] */ "00a14b42-e60e-4214-9de1-9ff187a67e6e",
/* [159] */ "93d02eb8-325b-42cc-b1b6-435eeb6e0449",
/* [163] */ "f9e5528e-52ec-4164-8b4d-0b25a4715ce6",
/* [166] */ "f1a3af6e-b8c3-4836-95da-3c4b740dab80",
/* [169] */ "81af0cbf-b3c5-49b9-ae04-bf93e493943f",
/* [170] */ "ab7bd5e5-68cc-4a04-9773-e668bf1d5e55",
/* [172] */ "55ff86fa-2fc0-46c1-a222-3b9bfef434be",
/* [174] */ "ed7dda66-4ec3-438b-8444-5f998528c7c1",
/* [175] */ "3929d8b1-f6f7-44f6-8366-8ccc6d6c8dae",
/* [178] */ "455a7a4c-1602-453b-9729-03c040ba1ed7",
            "6e68d708-26c3-45db-ae71-52c0ef0e3879",
/* [179] */ "c6be4f40-aad8-4be5-bc50-e8bb9217e988",
/* [181] */ "550e511b-3105-485f-8856-593761339f08",
/* [182] */ "dea7c93f-a9e5-4622-9da5-0959f2561e33",
/* [183] */ "705c2f9b-08d2-4502-b53e-0b01db35acd3",
            "819c7473-898f-439b-935d-fe4a96f64150",
/* [185] */ "8c1fc53f-7867-4399-8c6c-a6e4b128a9f8",
/* [187] */ "a1bf2aed-639d-4e1b-9aa3-6b7be8a49c59",
/* [188] */ "4e92f93d-4667-414e-a7bf-b42d33bc409e",
            "4013ec51-05a8-479b-9d5a-8f1149039e34",
            "796ec0f2-b9f9-4a9e-ac8e-1ce726eef88c",
/* [189] */ "7328ee55-9cd2-4f37-ac3c-630287a65f7c",
            "225d01da-9bbd-4cb1-b892-fd8a4a604c76",
/* [190] */ "97fd798d-94a7-4089-aaf6-50919d105c4c",
            "cb792c37-7cd2-4649-ab92-180fef7b9911",
/* [191] */ "7edcabaa-70f7-447d-9bb8-95537cd48b0d",
/* [192] */ "df3348bf-5eda-480a-9a3b-c26eb9df3d80",
/* [193] */ "854b565d-0ea7-40b3-ba41-054e2d4e1869",
            "079d9a35-331e-489d-b153-493ca28fe95c",
/* [194] */ "589778f4-cca0-4969-a27c-ccd29b2d35f0",
/* [195] */ "e0505dd6-3f2c-4ac1-8d93-41fb021af558",
/* [196] */ "ab8be1c6-18f4-4ecb-a115-8d839dba1bd0",
/* [197] */ "7dab18d4-4fc6-451f-9558-0b719bb2ecec",
/* [200] */ "f9c10e12-877a-4750-a697-d39691443c54",
            "a5be8e6c-7d4c-48aa-b457-22168cf56ddf",
            "72160964-cd58-4a01-bdbf-7f5151975ffe",
/* [202] */ "84d91759-4a70-4bc3-808d-24a8fc4c0816",
            "fad2acc3-ebda-490c-9698-06cd6690b924",
            "17191452-f402-47a0-b3e9-ae3e5688a534",
/* [203] */ "f328382f-2706-4a0b-aac8-b9ffed687997",
            "5cbd8451-cc3e-4dc4-bd3b-0033d8c869ff",
/* [204] */ "704436e1-e9b3-4269-813a-a1c6a425cb4d",
/* [206] */ "80748ed5-3d42-4d95-ba21-30b071ac17ad",
            "bb3f3be2-2ab7-48fb-b71b-45041b732887",
/* [207] */ "ae45b5a6-ea00-4e0c-948a-ebf3c84dfd01",
            "10363e09-d2e0-40a5-afce-0fdf852222d7",
/* [209] */ "777174f9-d80c-46f9-9fe8-5d59c93abd64",
            "5c75455b-4317-4285-818f-3ffc165b05f9",
            "dc708225-bcb0-447b-99ca-4291d717a600",
/* [210] */ "1dc43c46-ff0a-4527-9b01-34dde0abf4b8",
            "559813cd-ba6f-446f-af56-224170d39cce",
            "3c1c7283-78e1-4082-a191-d2eeed51d7fd",
/* [212] */ "1cda8175-d221-452a-8aad-e96d2da674ed",
/* [213] */ "751bcb18-2235-4bb9-b320-36551c3e8810",
/* [214] */ "fe3a9c52-6058-4203-9fa0-6c657852026c",
/* [215] */ "29fb462f-6975-41b0-b6fa-c2556a658a68",
/* [216] */ "c0f80985-d1cc-4ea6-839e-02e52b33623f",
            "404e1b0c-5e34-4419-818e-6707b8f90248",
            "34d224fc-9803-4da5-a08e-4b49e5d24592",
/* [217] */ "2977ad89-0ec8-4f60-8228-1b82a65a7c7c",
            "b954246e-29cf-4792-ae60-b841e5710111",
/* [218] */ "b54ede2a-70af-4a63-9d17-410ba5ee6c0c",
/* [219] */ "b2baf136-de10-48ca-ae6b-0f802acbf09c",
/* [220] */ "e55df82c-2128-43bf-a681-e626a2c4d1c3",
            "67338b47-c2f1-4f73-956c-4b54e427e6e4",
/* [221] */ "450cca9c-38f6-4eb8-b537-190fc3fff99d",
/* [222] */ "6b4ccebf-e741-4a54-97a4-20ac92c18107",
/* [225] */ "3a7ea080-fb0b-4ef3-b005-5b9e2aa931a2",
            "78d7fc2b-883d-48b1-9896-bf660ca0fe5a",
            "f12574f2-452c-4363-90a1-eeaa353936d6",
/* [226] */ "1ae1d3f8-974e-47a7-8f26-a105766fc24d",
/* [227] */ "9f2506cf-4aea-4c47-8897-f6b83ba814fb",
/* [228] */ "125dba5c-b19a-4218-928f-553788c02637",
/* [229] */ "5c7eb444-84c1-4a3b-8385-ccf4c6632dc3",
/* [232] */ "5c2dfc36-cf78-4718-acf4-c2823c95054a",
            "b6442198-b321-4f0d-9fdb-c12115831875",
            "0cf5fc99-c43f-4a36-837a-b3bad7902cb8",
/* [233] */ "b3631261-7322-405d-bb14-245bf29e729c",
            "2cc98dd0-5ae1-4a01-b2fd-7e1074bc9110",
            "3c6a9e1c-0425-4af3-aef8-d4e336fe4397",
/* [235] */ "2f52aab9-c383-4ac6-b1e1-c317198a3105",
            "b06bf0b1-0b05-42ed-b79e-4770671c90e2",
/* [237] */ "3ab39f7f-4613-4da6-a216-c2d6acc441bb",
            "ae20cf3c-38b8-483c-baea-6fb0994dc30c",
            "cd204d90-2414-4b9e-9d4f-fed09c9a816f",
/* [240] */ "ed2cc723-db4b-43aa-ab02-0e3161087499",
/* [241] */ "9cc96bd6-0ca0-466a-b897-e11eb7540b07",
/* [244] */ "8d45a51f-a945-4de1-b89c-2b39d1a5b90e",
/* [245] */ "6cd02e53-40ac-4269-91c9-4e1088af91f1",
/* [246] */ "8ada85bc-9bdf-4507-8334-849635ea0a01",
            "8a7d5deb-615f-4cd3-8977-b5fab8ec4d05",
/* [247] */ "dc2173b0-48fe-4555-b190-8052be1120eb",
            "040e434d-68d8-41a9-b3a1-1bee239914c1",
            "d1a564b2-c7f3-4b76-8712-3b8f5aae6ded",
            "0e614f33-c1da-4cfe-b6d5-65ecd2d066f2",
/* [250] */ "334fdaba-f373-42ff-8546-219c1463a7c5",
            "d4ff408e-8d43-46ff-94a4-bcfa6c994776",
/* [253] */ "d1abd887-d5de-46b0-88d6-f71f31a61305",
/* [254] */ "1d76af65-64d6-4211-b1b5-f5b799595e4d",
/* [255] */ "b3ad4257-29b0-4c44-b7a7-95f1d102769c",
};

const char *uuids_subset[] = {
    "64ab4e78-1b6e-4b88-b47f-2def46c79a86",
    "acda5fa0-58de-4e1e-aa65-2124d1e29c54",
    "830f0d57-9f21-40e8-bb86-cbf41de23fd6",
    "57044958-1b8a-4c02-ab75-2298c6e44263",
    "ae20cf3c-38b8-483c-baea-6fb0994dc30c",
    "040e434d-68d8-41a9-b3a1-1bee239914c1",
    "d1a564b2-c7f3-4b76-8712-3b8f5aae6ded",
    "8ada85bc-9bdf-4507-8334-849635ea0a01",
    "97cff77b-9f8d-40e9-8c41-601dc280a413",
    "4d05b973-b30b-4416-bdd8-e3773b30cb6e",
    "95382996-dfce-483d-8ff8-1d05c6c65bb5",
};

const char *uuids_new[] = {
    "a103cc42-d0e5-40fb-8f7f-3c1bee93e327",
    "01e13dc5-e65b-4988-a0cc-0d2f1f1e10fe",
    "71f3678a-a8c6-4176-a26e-c34779067135",
    "4f054508-22d5-49e1-9962-7508225c8b16",
    "e572116b-5b7b-45fd-bbe9-296029ce16b5",
    "695c8cfe-9830-4d9a-be67-50a124cefb76",
    "ea244996-645b-4a19-ad4a-48f3022b8e94",
    "0fd98758-9cc4-4779-b403-95ae3500f138",
    "b86772b4-0728-46ae-99e8-027799697838",
    "1c0cd559-81cd-4c27-8e24-6aef6f5af7f1",
    "2a37fe4a-8825-4fd6-9284-e1606967548a",
    "5920cc9d-62a3-4772-9e73-eb97f0bc483c",
    "53c215dd-bdba-4fdc-887a-86ab6f860df4",
};

#endif /* LIBVIRT_VIRHASHDATA_H */
