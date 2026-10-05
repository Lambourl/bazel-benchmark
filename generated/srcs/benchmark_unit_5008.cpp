#include "bench/fib.hpp"

// RE Benchmark TU 5008 of 20000 (depth=28, stamp="default")
namespace bench_tu_5008 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5008>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5008
