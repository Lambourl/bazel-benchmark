#include "bench/fib.hpp"

// RE Benchmark TU 4298 of 20000 (depth=28, stamp="default")
namespace bench_tu_4298 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4298>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4298
