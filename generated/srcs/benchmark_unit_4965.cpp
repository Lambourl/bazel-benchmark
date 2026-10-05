#include "bench/fib.hpp"

// RE Benchmark TU 4965 of 20000 (depth=28, stamp="default")
namespace bench_tu_4965 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4965>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4965
