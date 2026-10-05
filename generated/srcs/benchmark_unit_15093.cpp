#include "bench/fib.hpp"

// RE Benchmark TU 15093 of 20000 (depth=28, stamp="default")
namespace bench_tu_15093 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15093>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15093
