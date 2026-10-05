#include "bench/fib.hpp"

// RE Benchmark TU 4984 of 20000 (depth=28, stamp="default")
namespace bench_tu_4984 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4984>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4984
