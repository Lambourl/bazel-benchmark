#include "bench/fib.hpp"

// RE Benchmark TU 6828 of 20000 (depth=28, stamp="default")
namespace bench_tu_6828 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6828>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6828
