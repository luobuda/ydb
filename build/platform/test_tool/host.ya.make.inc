IF (HOST_OS_DARWIN AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5311948799)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5311971204)
ELSEIF (HOST_OS_DARWIN AND HOST_ARCH_ARM64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5311948158)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5311970512)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5311950371)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5311973174)
ELSEIF (HOST_OS_LINUX AND HOST_ARCH_AARCH64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5311947093)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5311969683)
ELSEIF (HOST_OS_WINDOWS AND HOST_ARCH_X86_64)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL_HOST sbr:5311949677)
    DECLARE_EXTERNAL_RESOURCE(TEST_TOOL3_HOST sbr:5311972070)

ENDIF()
