#include "bench/fib.hpp"

// RE Benchmark TU 15739 of 20000 (depth=28, stamp="default")
namespace bench_tu_15739 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15739>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15739
