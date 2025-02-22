#pragma once
#include "pch.h"
#include "Version.h"

static constexpr const wchar_t* V0_9_101_FILES[] = {
	L"assets\\NotoSansSC-Regular.otf",
	L"effects\\Anime4K\\Anime4K_3D_AA_Upscale_US.hlsl",
	L"effects\\Anime4K\\Anime4K_3D_Upscale_US.hlsl",
	L"effects\\Anime4K\\Anime4K_Denoise_Bilateral_Mean.hlsl",
	L"effects\\Anime4K\\Anime4K_Denoise_Bilateral_Median.hlsl",
	L"effects\\Anime4K\\Anime4K_Denoise_Bilateral_Mode.hlsl",
	L"effects\\Anime4K\\Anime4K_Restore_L.hlsl",
	L"effects\\Anime4K\\Anime4K_Restore_M.hlsl",
	L"effects\\Anime4K\\Anime4K_Restore_Soft_L.hlsl",
	L"effects\\Anime4K\\Anime4K_Restore_Soft_M.hlsl",
	L"effects\\Anime4K\\Anime4K_Restore_VL.hlsl",
	L"effects\\Anime4K\\Anime4K_Thin_HQ.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_Denoise_L.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_Denoise_S.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_Denoise_UL.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_Denoise_VL.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_GAN_x2_S.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_L.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_S.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_UL.hlsl",
	L"effects\\Anime4K\\Anime4K_Upscale_VL.hlsl",
	L"effects\\CAS\\CAS.hlsl",
	L"effects\\CAS\\CAS_Scaling.hlsl",
	L"effects\\CRT\\CRT_Easymode.hlsl",
	L"effects\\CRT\\CRT_Geom.hlsl",
	L"effects\\CRT\\CRT_Hyllian.hlsl",
	L"effects\\CRT\\CRT_Lottes.hlsl",
	L"effects\\CRT\\GTU_v050.hlsl",
	L"effects\\FSR\\FSR_EASU.hlsl",
	L"effects\\FSR\\FSR_RCAS.hlsl",
	L"effects\\FSRCNNX\\FSRCNNX.hlsl",
	L"effects\\FSRCNNX\\FSRCNNX_LineArt.hlsl",
	L"effects\\FXAA\\FXAA.hlsli",
	L"effects\\FXAA\\FXAA_High.hlsl",
	L"effects\\FXAA\\FXAA_Medium.hlsl",
	L"effects\\FXAA\\FXAA_Ultra.hlsl",
	L"effects\\NIS\\Coef_Scale.dds",
	L"effects\\NIS\\Coef_USM.dds",
	L"effects\\NIS\\NIS.hlsl",
	L"effects\\NIS\\NVSharpen.hlsl",
	L"effects\\NNEDI3\\NNEDI3_nns16_win8x4.hlsl",
	L"effects\\NNEDI3\\NNEDI3_nns64_win8x6.hlsl",
	L"effects\\Pixel Art\\MMPX.hlsl",
	L"effects\\Pixel Art\\Pixellate.hlsl",
	L"effects\\Pixel Art\\SharpBilinear.hlsl",
	L"effects\\RAVU\\RAVU_Lite_R3.hlsl",
	L"effects\\RAVU\\RAVU_Lite_R3_Weights.dds",
	L"effects\\RAVU\\RAVU_Zoom_R3.hlsl",
	L"effects\\RAVU\\RAVU_Zoom_R3_Weights.dds",
	L"effects\\Sharpen\\AdaptiveSharpen.hlsl",
	L"effects\\Sharpen\\FineSharp.hlsl",
	L"effects\\Sharpen\\LCAS.hlsl",
	L"effects\\Sharpen\\LumaSharpen.hlsl",
	L"effects\\SMAA\\AreaTex.dds",
	L"effects\\SMAA\\SearchTex.dds",
	L"effects\\SMAA\\SMAA.hlsli",
	L"effects\\SMAA\\SMAA_High.hlsl",
	L"effects\\SMAA\\SMAA_Low.hlsl",
	L"effects\\SMAA\\SMAA_Medium.hlsl",
	L"effects\\SMAA\\SMAA_Ultra.hlsl",
	L"effects\\xBRZ\\xBRZ_2x.hlsl",
	L"effects\\xBRZ\\xBRZ_3x.hlsl",
	L"effects\\xBRZ\\xBRZ_4x.hlsl",
	L"effects\\xBRZ\\xBRZ_5x.hlsl",
	L"effects\\xBRZ\\xBRZ_6x.hlsl",
	L"effects\\xBRZ\\xBRZ_Freescale.hlsl",
	L"effects\\ACNet.hlsl",
	L"effects\\Bicubic.hlsl",
	L"effects\\Bilinear.hlsl",
	L"effects\\Deband.hlsl",
	L"effects\\ImageAdjustment.hlsl",
	L"effects\\Jinc.hlsl",
	L"effects\\Lanczos.hlsl",
	L"effects\\Nearest.hlsl",
	L"effects\\SSimDownscaler.hlsl",
	L"Magpie.App.dll",
	L"Magpie.Core.dll",
	L"Microsoft.UI.Xaml.dll",
	L"resources.pri"
};

static constexpr const wchar_t* V0_9_101_FOLDERS[] = {
	L"assets",
	L"effects\\Anime4K",
	L"effects\\CAS",
	L"effects\\CRT",
	L"effects\\FSR",
	L"effects\\FSRCNNX",
	L"effects\\FXAA",
	L"effects\\NIS",
	L"effects\\NNEDI3",
	L"effects\\Pixel Art",
	L"effects\\RAVU",
	L"effects\\Sharpen",
	L"effects\\SMAA",
	L"effects\\xBRZ",
	L"effects"
};

struct PackageFiles {
	const std::span<const wchar_t*> files;
	const std::span<const wchar_t*> folders;

	static std::optional<PackageFiles> Get(const Version& /*version*/) {
		//if (version <= Version(0, 10, 0)) {
		return PackageFiles{ _ToSpan(V0_9_101_FILES), _ToSpan(V0_9_101_FOLDERS)};
		//}

		//return std::nullopt;
	}

private:
	template<size_t N>
	static std::span<const wchar_t*> _ToSpan(const wchar_t* const (&arr)[N]) {
		return std::span((const wchar_t**)arr, N);
	}
};
