<?php

declare(strict_types=1);

namespace Rector\Tests\CodingStyle\Rector\ClassConst\VarConstantCommentRector\Fixture;

class UnionNestedAndSingleLevelArrayScalars
{
    public const ARRAY_CONST = [
        'key2' => ['value2', 1234],
        1 => null,
    ];
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\CodingStyle\Rector\ClassConst\VarConstantCommentRector\Fixture;

class UnionNestedAndSingleLevelArrayScalars
{
    /**
     * @var array<int|string, string[]|int[]|null>
     */
    public const ARRAY_CONST = [
        'key2' => ['value2', 1234],
        1 => null,
    ];
}

?>
