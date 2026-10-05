#include "bench/fib.hpp"

// RE Benchmark TU 3072 of 20000 (depth=28, stamp="default")
namespace bench_tu_3072 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3072>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3072
